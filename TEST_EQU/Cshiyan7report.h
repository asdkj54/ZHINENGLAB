#pragma once
#include "DataBaseADO.h"

// Cshiyan7report 对话框

class Cshiyan7report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan7report)

public:
	Cshiyan7report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan7report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan7report };
#endif

public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan7;
	CComboBox m_comboxs7;
	CString m_edits71;
	CString m_edits72;
	CString m_edits73;
	CString m_edits74;
	CString m_edits75;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
