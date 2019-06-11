#pragma once


// Cshiyan3 对话框

class Cshiyan3 : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan3)

public:
	Cshiyan3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton4();
};
