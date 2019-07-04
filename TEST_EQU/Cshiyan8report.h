#pragma once
#include "DataBaseADO.h"

// Cshiyan8report 对话框

class Cshiyan8report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan8report)

public:
	Cshiyan8report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan8report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan8report };
#endif

public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan8;
	CComboBox m_comboxs8;
	CString m_edits81;
	CString m_edits82;
	CString m_edits83;
	CString m_edits84;
	CString m_edits85;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
