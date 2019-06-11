#pragma once
#include "Cwork.h"

// Cworklogin 对话框

class Cworklogin : public CDialogEx
{
	DECLARE_DYNAMIC(Cworklogin)

public:
	Cworklogin(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cworklogin();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_worklogin };
#endif
private:
	Cwork dlg;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
};
