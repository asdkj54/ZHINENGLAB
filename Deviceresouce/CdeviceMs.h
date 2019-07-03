#pragma once
#include "CdeviM.h"
#include"DataBaseADO.h"
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
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;

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
	CListCtrl m_listdeviM;
	CComboBox m_combox1;
	afx_msg void OnBnClickedButton2();
	CEdit m_edit1;
	CEdit m_edit2;
	CEdit m_edit3;
	CEdit m_edit4;
	CEdit m_edit5;
	CEdit m_edit6;
	CString m_editv1;
	CString m_editv2;
	CString m_editv3;
	CString m_editv4;
	CString m_editv5;
	CString m_editv6;
};
