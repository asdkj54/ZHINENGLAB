#pragma once
#include"DataBaseADO.h"
// CdeviM 对话框

class CdeviM : public CDialogEx
{
	DECLARE_DYNAMIC(CdeviM)

public:
	CdeviM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CdeviM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_deviM };
#endif
private:
	//	CComboBox m_combobox1;
	CDataBaseADO m_DataBase;
public:
	//	CComboBox m_combox2;
	CString VariantToCString(_variant_t var);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listdev;
public:
	virtual BOOL OnInitDialog();

	//afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	CListCtrl m_listdevM;
};
