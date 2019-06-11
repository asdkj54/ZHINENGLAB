#pragma once


// CDEVICERRSOUCE 对话框

class CDEVICERRSOUCE : public CDialogEx
{
	DECLARE_DYNAMIC(CDEVICERRSOUCE)

public:
	CDEVICERRSOUCE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDEVICERRSOUCE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DEVICERESOUCE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
