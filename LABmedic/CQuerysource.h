#pragma once


// CQuerysource 对话框

class CQuerysource : public CDialogEx
{
	DECLARE_DYNAMIC(CQuerysource)

public:
	CQuerysource(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CQuerysource();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Querysource };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
private:
	CListCtrl m_listQuerysource;
};
