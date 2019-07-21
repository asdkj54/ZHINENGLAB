#pragma once
#include "C.h"
#include "Cshuyan1fenxi.h"
// Ctestpoint 对话框

class Ctestpoint : public CDialogEx
{
	DECLARE_DYNAMIC(Ctestpoint)

public:
	Ctestpoint(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctestpoint();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_testpoint };
#endif
private:
	C dlg;
	Cshuyan1fenxi dlg1;

protected:
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CBrush m_brush;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	virtual BOOL OnInitDialog();
	//afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedopenGetFile();
	afx_msg void OnBnClickedButton5();
};
