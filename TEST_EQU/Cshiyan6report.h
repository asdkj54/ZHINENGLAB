#pragma once
#include "DataBaseADO.h"

// Cshiyan6report 对话框

class Cshiyan6report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan6report)

public:
	Cshiyan6report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan6report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan6report };
#endif

public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan6;
	CComboBox m_comboxs6;
	CString m_edits61;
	CString m_edits62;
	CString m_edits63;
	CString m_edits64;
	CString m_edits65;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
