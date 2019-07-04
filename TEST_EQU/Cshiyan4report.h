#pragma once


// Cshiyan4report 对话框

class Cshiyan4report : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan4report)

public:
	Cshiyan4report(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan4report();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan2report };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
