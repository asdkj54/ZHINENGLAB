#pragma once


// Cshiyan5 对话框

class Cshiyan5 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan5)

public:
	Cshiyan5(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan5();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
