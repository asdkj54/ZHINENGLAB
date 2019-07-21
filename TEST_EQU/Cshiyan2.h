#pragma once
#include"Cshiyan2report.h"
#include"Cshiyan2fenxi.h"
// Cshiyan2 对话框

class Cshiyan2 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan2)

public:
	Cshiyan2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan2 };
#endif
private:
	Cshiyan2report dlg;
	Cshiyan2fenxi dlg1;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CBrush m_brush;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedopenGetFile();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton3();
};
