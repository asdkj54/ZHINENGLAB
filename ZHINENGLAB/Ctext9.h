﻿#pragma once


// Ctext9 对话框

class Ctext9 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext9)

public:
	Ctext9(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext9();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text9 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
