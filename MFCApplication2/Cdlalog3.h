#pragma once


// Cdlalog3 对话框

class Cdlalog3 : public CDialogEx
{
	DECLARE_DYNAMIC(Cdlalog3)

public:
	Cdlalog3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cdlalog3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
