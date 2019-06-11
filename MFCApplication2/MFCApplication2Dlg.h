
// MFCApplication2Dlg.h: 头文件
//

#pragma once
#include "Cdlalog1.h"
#include "Cdlalog2.h"
#include "Cdlalog3.h"

// CMFCApplication2Dlg 对话框
class CMFCApplication2Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication2Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

private:
	Cdlalog1 dlg1;
	Cdlalog2 dlg2;
	Cdlalog3 dlg3;

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_button;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton1();
private:
	CComboBox m_combobox1;
public:
	CComboBox m_combox2;
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnBnClickedButton3();
};
