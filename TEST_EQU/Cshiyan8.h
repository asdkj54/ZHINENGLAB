#pragma once


// Cshiyan8 对话框

class Cshiyan8 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan8)

public:
	Cshiyan8(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan8();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan8 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
