#pragma once


// Ctext3 对话框

class Ctext3 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext3)

public:
	Ctext3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
