#pragma once
#include "DataBaseADO.h"

// Ctext9 对话框

class Ctext9 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext9)

public:
	Ctext9(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext9();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text9 };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl m_listshiyan9;
	CComboBox m_comboxs1;
	CComboBox m_comboxs2;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
