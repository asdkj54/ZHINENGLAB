#pragma once


// C 对话框

class C : public CDialogEx
{
	DECLARE_DYNAMIC(C)

public:
	C(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~C();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_testrecord };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listtestrecord;
public:
	virtual BOOL OnInitDialog();
};
