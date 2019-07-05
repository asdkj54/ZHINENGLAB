#pragma once
#include "DataBaseADO.h"

// Ctext10 对话框

class Ctext10 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext10)

public:
	Ctext10(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext10();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text10 };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
