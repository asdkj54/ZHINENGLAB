#pragma once
#include "DataBaseADO.h"

// Cshiyan3report 对话框

class Cshiyan3report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan3report)

public:
	Cshiyan3report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan3report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan3report };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan3;
	CComboBox m_comboxs3;
	CString m_edits34;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CComboBox m_test3combox1;
	CComboBox m_test3combox2;
	CDateTimeCtrl m_test3date;
};
