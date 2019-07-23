#pragma once
#include "CresoM.h"
#include"DataBaseADO.h"
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
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
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
	// afx_msg void OnPaint();	// afx_msg void OnPaint();

	afx_msg void OnBnClickedButton2();

	CListCtrl m_listresM;
	//afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	CComboBox m_combox2;


	CComboBox m_rcombox1;
	CComboBox m_rcombox2;
	CComboBox m_rcombox3;
	CComboBox m_rcombox4;
	CString m_redit1;
	CString m_redit3;
	CDateTimeCtrl m_rdate1;
};
