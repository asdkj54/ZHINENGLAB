#pragma once
#include "CresoM.h"

// CresourceMs 对话框

class CresourceMs : public CDialogEx
{
	DECLARE_DYNAMIC(CresourceMs)

public:
	CresourceMs(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CresourceMs();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_resourceMs };
#endif
private:
	CresoM dlg;
protected:
	afx_msg void OnPaint();
	//afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CBrush m_brush;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	//afx_msg void OnPaint();
};
