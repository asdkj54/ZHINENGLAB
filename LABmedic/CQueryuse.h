#pragma once


// CQueryuse 对话框

class CQueryuse : public CDialogEx
{
	DECLARE_DYNAMIC(CQueryuse)

public:
	CQueryuse(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CQueryuse();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Queryuse };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listqueryuse;
public:
	virtual BOOL OnInitDialog();
};
