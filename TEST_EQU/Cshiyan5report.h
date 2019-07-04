#pragma once


// Cshiyan5report 对话框

class Cshiyan5report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan5report)

public:
	Cshiyan5report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan5report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan5report };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan5;
	CComboBox m_comboxs5;
	CString m_edits51;
	CString m_edits52;
	CString m_edits53;
	CString m_edits54;
	CString m_edits55;
};
