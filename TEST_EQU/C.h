#pragma once
#include "DataBaseADO.h"

// C 对话框

class C : public CDialogEx
{
	DECLARE_DYNAMIC(C)

public:
	C(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~C();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_testrecord };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listtestrecord;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CString m_text10;
	CString m_text11;
	CString m_text12;
	CString m_text13;
	CString m_text14;
	CString m_text15;
	CString m_text16;
	CString m_text17;
	CString m_text18;
	CString m_text19;
	CString m_text110;
	CString m_text111;
	CString m_textsourse;
	CComboBox m_combox1;
};
