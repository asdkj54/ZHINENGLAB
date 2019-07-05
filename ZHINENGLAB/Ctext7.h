#pragma once
#include "DataBaseADO.h"

// Ctext7 对话框

class Ctext7 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext7)

public:
	Ctext7(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext7();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text7 };
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
	CListCtrl m_listshiyan7;
	CComboBox m_comboxs1;
	CComboBox m_comboxs2;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
