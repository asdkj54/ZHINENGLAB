#pragma once


// Ctext7 对话框

class Ctext7 : public CDialogEx
{
	DECLARE_DYNAMIC(Ctext7)

public:
	Ctext7(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Ctext7();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_text7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
