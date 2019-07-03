#pragma once
#include <vector>
//#include <string>
using namespace std;
//引入ADO库文件
#import "msado15.dll" no_namespace rename("EOF","adoEOF")

class CDataBaseADO
{
public:
	CDataBaseADO(void);
	~CDataBaseADO(void);
private:
	// _ConnectionPtr通常被用来创建一个数据连接或执行一条不返回任何结果的SQL语句，如一个存储过程。
	_ConnectionPtr m_pConnection;
	//记录集

public:
	// 打开数据库连接
	bool Open(_bstr_t strConnection);
	// 关闭数据库连接
	void Close(void);
	vector<vector<_variant_t>> Select(BSTR strSql, vector<_variant_t> strName);
	// 执行SQL语句，并返回影响的行数
	int ExcuteSQL(_bstr_t CommandText, bool IsText = true);
};