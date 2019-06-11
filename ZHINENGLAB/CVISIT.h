#pragma once


// CVISIT 对话框

class CVISIT : public CDialogEx
{
	DECLARE_DYNAMIC(CVISIT)

public:
	CVISIT(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CVISIT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VISIT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
