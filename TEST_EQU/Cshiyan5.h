#pragma once
#include"Cshiyan5report.h"
#include"Cshiyan5fenxi.h"
// Cshiyan5 对话框

class Cshiyan5 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan5)

public:
	Cshiyan5(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan5();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan5 };
#endif
private:
	Cshiyan5report dlg;
	Cshiyan5fenxi dlg1;
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
