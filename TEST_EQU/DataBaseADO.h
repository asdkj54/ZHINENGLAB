#pragma once
#include <vector>
//#include <string>
using namespace std;
//����ADO���ļ�
#import "msado15.dll" no_namespace rename("EOF","adoEOF")

class CDataBaseADO
{
public:
	CDataBaseADO(void);
	~CDataBaseADO(void);
private:
	// _ConnectionPtrͨ������������һ���������ӻ�ִ��һ���������κν����SQL��䣬��һ���洢���̡�
	_ConnectionPtr m_pConnection;
	//��¼��

public:
	// �����ݿ�����
	bool Open(_bstr_t strConnection);
	// �ر����ݿ�����
	void Close(void);
	vector<vector<_variant_t>> Select(BSTR strSql, vector<_variant_t> strName);
	// ִ��SQL��䣬������Ӱ�������
	int ExcuteSQL(_bstr_t CommandText, bool IsText = true);
};