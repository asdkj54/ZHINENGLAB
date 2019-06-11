#pragma once


// Cdlalog1 对话框

class Cdlalog1 : public CDialogEx
{
	DECLARE_DYNAMIC(Cdlalog1)

public:
	Cdlalog1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cdlalog1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
