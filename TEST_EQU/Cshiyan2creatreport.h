﻿#pragma once


// Cshiyan2creatreport 对话框

class Cshiyan2creatreport : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan2creatreport)

public:
	Cshiyan2creatreport(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan2creatreport();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedopenGetFile();
};
