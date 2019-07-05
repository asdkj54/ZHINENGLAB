#pragma once
#include "DataBaseADO.h"

// Ctext1 对话框

class Ctext1 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext1)

public:
	Ctext1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text1 };
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
	CListCtrl m_listtestrecorde;
	CComboBox m_combox2;
	CComboBox m_combox1;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
