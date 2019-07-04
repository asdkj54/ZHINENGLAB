#pragma once


// Ctext5 对话框

class Ctext5 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext5)

public:
	Ctext5(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext5();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
