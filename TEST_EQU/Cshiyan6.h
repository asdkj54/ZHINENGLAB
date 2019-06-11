#pragma once


// Cshiyan6 对话框

class Cshiyan6 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan6)

public:
	Cshiyan6(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan6();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
