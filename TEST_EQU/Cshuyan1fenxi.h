#pragma once


// Cshuyan1fenxi 对话框

class Cshuyan1fenxi : public CDialogEx
{
	DECLARE_DYNAMIC(Cshuyan1fenxi)

public:
	Cshuyan1fenxi(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshuyan1fenxi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan1fenxi };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
