#pragma once


// Cshiyan2 对话框

class Cshiyan2 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan2)

public:
	Cshiyan2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
