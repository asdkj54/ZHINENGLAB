#pragma once
#include "DataBaseADO.h"

// Ctext6 对话框

class Ctext6 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext6)

public:
	Ctext6(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext6();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text6 };
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
	CListCtrl m_listshiyan6;
	CComboBox m_comboxs2;
	CComboBox m_comboxs1;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
