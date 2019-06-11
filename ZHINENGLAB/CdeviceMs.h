#pragma once
#include "CdevM.h"


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
	CdevM dlg;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};
