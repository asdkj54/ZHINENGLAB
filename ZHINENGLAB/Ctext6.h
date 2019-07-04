#pragma once


// Ctext6 对话框

class Ctext6 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext6)

public:
	Ctext6(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext6();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
