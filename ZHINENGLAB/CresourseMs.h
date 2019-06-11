#pragma once
#include "CresM.h"

// CresourseMs 对话框

class CresourseMs : public CDialogEx
{
	DECLARE_DYNAMIC(CresourseMs)

public:
	CresourseMs(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CresourseMs();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_resourseMs };
#endif
private:
	CresM dlg;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};
