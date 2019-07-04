#pragma once
#include "CdevM.h"
#include "DataBaseADO.h"

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
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
private:
	CdevM dlg;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
	CComboBox m_zcombox1;
	CComboBox m_zcombox2;
	CListCtrl m_listZdevm;
	afx_msg void OnBnClickedButton2();
};
