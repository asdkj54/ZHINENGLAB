#pragma once
#include "ChartCtrl/ChartCtrl.h"
#include "ChartCtrl/ChartTitle.h"
#include "ChartCtrl/ChartLineSerie.h"
#include "ChartCtrl/ChartMouseListener.h"

// Cshiyan5fenxi 对话框

class Cshiyan5fenxi : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan5fenxi)

public:
	Cshiyan5fenxi(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan5fenxi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan5fenxi };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
public:
	CChartCtrl m_ChartCtrl51;
	afx_msg void OnBnClickedButton1();
};
