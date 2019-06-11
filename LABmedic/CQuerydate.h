#pragma once


// CQuerydate 对话框

class CQuerydate : public CDialogEx
{
	DECLARE_DYNAMIC(CQuerydate)

public:
	CQuerydate(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CQuerydate();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Querydate };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listquerydate;
	virtual BOOL OnInitDialog();
};
