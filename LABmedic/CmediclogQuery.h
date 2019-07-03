#pragma once
#include "CQuerydate.h"
#include "CQuerysource.h"
#include "CQuerystaff.h"
#include "CQueryuse.h"
#include"DataBaseADO.h"
// CmediclogQuery 对话框

class CmediclogQuery : public CDialogEx
{
	DECLARE_DYNAMIC(CmediclogQuery)

public:
	CmediclogQuery(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CmediclogQuery();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_mediclogQuery };
#endif
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
private:
	CQuerydate dlg;
	CQuerysource dlg1;
	CQuerystaff dlg2;
	CQueryuse dlg3;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
private:
	CListCtrl m_listQuery;
public:
	CComboBox m_comboxm1;
	CComboBox m_comboxm2;
	CComboBox m_comboxm3;
	afx_msg void OnBnClickedButton5();
	CString m_editm1;
	CString m_editm2;
	CString m_editm3;
	CEdit m_editm4;
	CString m_editm44;
	CString m_editm5;
	CEdit m_editm6;
	CString m_editm66;
};
