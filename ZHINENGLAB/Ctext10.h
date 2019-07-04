#pragma once


// Ctext10 对话框

class Ctext10 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext10)

public:
	Ctext10(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext10();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text10 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
