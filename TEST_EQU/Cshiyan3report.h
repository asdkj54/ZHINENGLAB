﻿#pragma once


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

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan3;
	CComboBox m_comboxs3;
	CString m_edits31;
	CString m_edits32;
	CString m_edits33;
	CString m_edits34;
	CString m_edits35;
};