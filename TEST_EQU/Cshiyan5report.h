#pragma once
#include "DataBaseADO.h"

// Cshiyan5report 对话框

class Cshiyan5report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan5report)

public:
	Cshiyan5report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan5report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan5report };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan5;
	CComboBox m_comboxs5;
	CString m_edits54;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CComboBox m_text5combox1;
	CDateTimeCtrl m_text5date;
	CComboBox m_text5combox2;
};
