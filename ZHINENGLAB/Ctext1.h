﻿#pragma once


// Ctext1 对话框

class Ctext1 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext1)

public:
	Ctext1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
