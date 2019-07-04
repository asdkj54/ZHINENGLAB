#pragma once


// Ctext2 对话框

class Ctext2 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext2)

public:
	Ctext2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
