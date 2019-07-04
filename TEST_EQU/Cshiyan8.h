#pragma once
#include"Cshiyan8report.h"

// Cshiyan8 对话框

class Cshiyan8 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan8)

public:
	Cshiyan8(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan8();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan8 };
#endif
private:
	Cshiyan8report dlg;
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
};
