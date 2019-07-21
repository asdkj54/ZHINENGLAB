#pragma once
#include"Cshiyan6report.h"
#include"Cshiyan6fenxi.h"
// Cshiyan6 对话框

class Cshiyan6 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan6)

public:
	Cshiyan6(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan6();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan6 };
#endif
private:
	Cshiyan6report dlg;
	Cshiyan6fenxi dlg1;
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
