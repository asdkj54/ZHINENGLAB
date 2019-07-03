#include "StdAfx.h"
#include "DataBaseADO.h"


CDataBaseADO::CDataBaseADO(void)
{
	::CoInitialize(NULL);   //初始化OLE/COM库环境 
	m_pConnection = NULL;
}


CDataBaseADO::~CDataBaseADO(void)
{
	if (m_pConnection)
		m_pConnection->Close();
	m_pConnection = NULL;
	::CoUninitialize();	//释放程序占用的COM 资源
}


// 打开数据库连接
bool CDataBaseADO::Open(_bstr_t strConnection)
{
	if (FAILED(m_pConnection.CreateInstance(__uuidof(Connection))))	 //初始化Connection指针
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


// 关闭数据库连接
void CDataBaseADO::Close(void)
{
	if (m_pConnection)
		m_pConnection->Close();
	m_pConnection = NULL;
}


// 查询
//strSql：查询语句
//strName：要返回的记录集内的列名
vector<vector<_variant_t>> CDataBaseADO::Select(BSTR strSql, vector<_variant_t> strName)
{
	_RecordsetPtr pRecordset;	           //定义数据集对象
	vector<vector<_variant_t>> vRecord;	   //这是C++0x新标准，不是VS2010或者不支持新标准的，
	//要写成vector< vector<_variant_t> >,因为>>会被认为是右移操作符

	if (FAILED(pRecordset.CreateInstance(__uuidof(Recordset))))		//初始化Recordset指针
		return vector<vector<_variant_t>>();
	try {
		pRecordset->Open(strSql, (IDispatch*)m_pConnection, adOpenDynamic, adLockOptimistic, adCmdText);//adOpenDynamic：动态 adLockOptimistic乐观封锁法 adCmdText：文本查询语句
		pRecordset->MoveFirst();
		while (!pRecordset->adoEOF)   //遍历所有记录
		{
			//取记录字段值
			vector<_variant_t> vTheValue; //VARIANT数据类型的泛型
			for (int i = 0; i < strName.size(); ++i)
			{
				vTheValue.push_back(pRecordset->GetCollect(strName.at(i)));//得到字段的值,并添加到容器的最后
			}
			vRecord.push_back(vTheValue);
			pRecordset->MoveNext();	//移动到下一条记录
		}
		pRecordset->Close();	//关闭连接
		pRecordset = NULL;
	}
	catch (_com_error e)
	{
		AfxMessageBox(e.Description());
	}
	return vRecord;
}


// 执行SQL语句，并返回影响的行数
//IsText：是否是文本命令，是：文本命令，否：存储过程
int CDataBaseADO::ExcuteSQL(_bstr_t CommandText, bool IsText)
{
	_variant_t RecordsAffected = -1;	//记录影响的行数
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
