#pragma once
#include "CQuerydate.h"
#include "CQuerysource.h"
#include "CQuerystaff.h"
#include "CQueryuse.h"

// CmediclogQuery 对话框

class CmediclogQuery : public CDialogEx
{
	DECLARE_DYNAMIC(CmediclogQuery)

public:
	CmediclogQuery(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CmediclogQuery();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_mediclogQuery };
#endif
private:
	CQuerydate dlg;
	CQuerysource dlg1;
	CQuerystaff dlg2;
	CQueryuse dlg3;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
private:
	CListCtrl m_listQuery;
};
