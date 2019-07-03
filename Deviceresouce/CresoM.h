#pragma once
#include "afxcmn.h"
#include "DataBaseADO.h"

// CresoM 对话框

class CresoM : public CDialogEx
{
	DECLARE_DYNAMIC(CresoM)

public:
	CresoM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CresoM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_resoM };
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
public:
	CListCtrl m_listres;
	virtual BOOL OnInitDialog();
};
