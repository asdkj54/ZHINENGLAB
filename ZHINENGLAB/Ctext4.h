﻿#pragma once


// Ctext4 对话框

class Ctext4 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext4)

public:
	Ctext4(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext4();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
