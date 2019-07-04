#pragma once


// Ctext8 对话框

class Ctext8 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext8)

public:
	Ctext8(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext8();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text8 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
