#pragma once


// Cdlalog2 对话框

class Cdlalog2 : public CDialogEx
{
	DECLARE_DYNAMIC(Cdlalog2)

public:
	Cdlalog2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cdlalog2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
