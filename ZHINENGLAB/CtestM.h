#pragma once
#include"Ctext1.h"
#include"Ctext2.h"
#include"Ctext3.h"
#include"Ctext4.h"
#include"Ctext5.h"
#include"Ctext6.h"
#include"Ctext7.h"
#include"Ctext8.h"
#include"Ctext9.h"
#include"Ctext10.h"

// CtestM 对话框

class CtestM : public CDialogEx
{
	DECLARE_DYNAMIC(CtestM)

public:
	CtestM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CtestM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_testM };
#endif

private:
	Ctext1 dlgt1;
	Ctext2 dlgt2;
	Ctext3 dlgt3;
	Ctext4 dlgt4;
	Ctext5 dlgt5;
	Ctext6 dlgt6;
	Ctext7 dlgt7;
	Ctext8 dlgt8;
	Ctext9 dlgt9;
	Ctext10 dlgt10;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
//	CListCtrl m_listLabtestM;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton2();
};
