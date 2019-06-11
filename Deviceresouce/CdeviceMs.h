#pragma once
#include "CdeviM.h"

// CdeviceMs 对话框

class CdeviceMs : public CDialogEx
{
	DECLARE_DYNAMIC(CdeviceMs)

public:
	CdeviceMs(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CdeviceMs();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_deviceMs };
#endif
private:
	CdeviM dlg;


protected:
	afx_msg void OnPaint();
	//afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CBrush m_brush;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	//afx_msg void OnPaint();
};
