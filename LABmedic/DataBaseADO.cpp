#include "StdAfx.h"
#include "DataBaseADO.h"


CDataBaseADO::CDataBaseADO(void)
{
	::CoInitialize(NULL);   //��ʼ��OLE/COM�⻷�� 
	m_pConnection = NULL;
}


CDataBaseADO::~CDataBaseADO(void)
{
	if (m_pConnection)
		m_pConnection->Close();
	m_pConnection = NULL;
	::CoUninitialize();	//�ͷų���ռ�õ�COM ��Դ
}


// �����ݿ�����
bool CDataBaseADO::Open(_bstr_t strConnection)
{
	if (FAILED(m_pConnection.CreateInstance(__uuidof(Connection))))	 //��ʼ��Connectionָ��
		return false;

	try {
		m_pConnection->Open(strConnection, "", "", 0);

	}
	catch (_com_error e)
	{
		AfxMessageBox(e.Description());
		return false;
	}
	return true;
}


// �ر����ݿ�����
void CDataBaseADO::Close(void)
{
	if (m_pConnection)
		m_pConnection->Close();
	m_pConnection = NULL;
}


// ��ѯ
//strSql����ѯ���
//strName��Ҫ���صļ�¼���ڵ�����
vector<vector<_variant_t>> CDataBaseADO::Select(BSTR strSql, vector<_variant_t> strName)
{
	_RecordsetPtr pRecordset;	           //�������ݼ�����
	vector<vector<_variant_t>> vRecord;	   //����C++0x�±�׼������VS2010���߲�֧���±�׼�ģ�
	//Ҫд��vector< vector<_variant_t> >,��Ϊ>>�ᱻ��Ϊ�����Ʋ�����

	if (FAILED(pRecordset.CreateInstance(__uuidof(Recordset))))		//��ʼ��Recordsetָ��
		return vector<vector<_variant_t>>();
	try {
		pRecordset->Open(strSql, (IDispatch*)m_pConnection, adOpenDynamic, adLockOptimistic, adCmdText);//adOpenDynamic����̬ adLockOptimistic�ֹ۷����� adCmdText���ı���ѯ���
		pRecordset->MoveFirst();
		while (!pRecordset->adoEOF)   //�������м�¼
		{
			//ȡ��¼�ֶ�ֵ
			vector<_variant_t> vTheValue; //VARIANT�������͵ķ���
			for (int i = 0; i < strName.size(); ++i)
			{
				vTheValue.push_back(pRecordset->GetCollect(strName.at(i)));//�õ��ֶε�ֵ,����ӵ����������
			}
			vRecord.push_back(vTheValue);
			pRecordset->MoveNext();	//�ƶ�����һ����¼
		}
		pRecordset->Close();	//�ر�����
		pRecordset = NULL;
	}
	catch (_com_error e)
	{
		AfxMessageBox(e.Description());
	}
	return vRecord;
}


// ִ��SQL��䣬������Ӱ�������
//IsText���Ƿ����ı�����ǣ��ı�����񣺴洢����
int CDataBaseADO::ExcuteSQL(_bstr_t CommandText, bool IsText)
{
	_variant_t RecordsAffected = -1;	//��¼Ӱ�������
	try {
		if (IsText)
			m_pConnection->Execute(CommandText, &RecordsAffected, adCmdText);
		else
			m_pConnection->Execute(CommandText, &RecordsAffected, adCmdStoredProc);
	}
	catch (_com_error e)
	{
		return -1;
	}
	return RecordsAffected.intVal;
}
