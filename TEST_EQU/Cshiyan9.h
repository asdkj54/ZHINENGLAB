#pragma once
#include"Cshiyan9report.h"
#include"Cshiyan9fenxi.h"
// Cshiyan9 对话框

class Cshiyan9 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan9)

public:
	Cshiyan9(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan9();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan9 };
#endif
private:
	Cshiyan9report dlg;
	Cshiyan9fenxi dlg1;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CBrush m_brush;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedopenGetFile();
	afx_msg void OnBnClickedButton2();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton3();
};
