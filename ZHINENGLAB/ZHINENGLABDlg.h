
// ZHINENGLABDlg.h: 头文件
//

#pragma once
#include "CVISIT.h"
#include "Cworklogin.h"

// CZHINENGLABDlg 对话框
class CZHINENGLABDlg : public CDialogEx
{
// 构造
public:
	CZHINENGLABDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZHINENGLAB_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

private:
	Cworklogin dlg;
	CVISIT dlg1;

// 实现
protected:
	HICON m_hIcon;
	CBrush m_brush;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedopenGetFile();
};
