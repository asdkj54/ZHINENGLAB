#pragma once


// Cshiyan2report 对话框

class Cshiyan2report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan2report)

public:
	Cshiyan2report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan2report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan2report };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listshiyan2;
	CComboBox m_comboxs2;
	CString m_edits21;
	CString m_edits22;

	CString m_edits25;
	CString m_edits24;
	CString m_edits23;
};
