#pragma once


// Cshiyan9report 对话框

class Cshiyan9report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan9report)

public:
	Cshiyan9report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan9report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan9report };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan9;
	CComboBox m_comboxs9;
	CString m_edits91;
	CString m_edits92;
	CString m_edits93;
	CString m_edits94;
	CString m_edits95;
};
