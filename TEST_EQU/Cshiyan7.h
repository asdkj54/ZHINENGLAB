#pragma once


// Cshiyan7 对话框

class Cshiyan7 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan7)

public:
	Cshiyan7(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan7();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
