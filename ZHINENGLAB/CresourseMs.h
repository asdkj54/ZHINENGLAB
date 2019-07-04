#pragma once
#include "CresM.h"
#include "DataBaseADO.h"
// CresourseMs 对话框

class CresourseMs : public CDialogEx
{
	DECLARE_DYNAMIC(CresourseMs)

public:
	CresourseMs(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CresourseMs();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_resourseMs };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
private:
	CresM dlg;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
	CListCtrl m_zlistresM;
	CComboBox m_zrcombox1;
	CComboBox m_zrcombox2;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
};
