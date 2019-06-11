#pragma once


// Cshiyan9 对话框

class Cshiyan9 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan9)

public:
	Cshiyan9(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan9();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan9 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
