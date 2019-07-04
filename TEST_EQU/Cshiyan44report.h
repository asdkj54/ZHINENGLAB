#pragma once


// Cshiyan44report 对话框

class Cshiyan44report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan44report)

public:
	Cshiyan44report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan44report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan4report };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan4;
	CComboBox m_comboxs4;
	CString m_edits41;
	CString m_edits43;
	CString m_edits42;
	CString m_edits44;
	CString m_edits45;
};
