#pragma once
#include "ChartCtrl/ChartCtrl.h"
#include "ChartCtrl/ChartTitle.h"
#include "ChartCtrl/ChartLineSerie.h"
#include "ChartCtrl/ChartMouseListener.h"

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
	CChartCtrl m_ChartCtrl11;
	CChartCtrl m_ChartCtrl12;
	CChartCtrl m_ChartCtrl13;
	CChartCtrl m_ChartCtrl14;
	CChartCtrl m_ChartCtrl15;
	CChartCtrl m_ChartCtrl16;
	CChartCtrl m_ChartCtrl17;
	CChartCtrl m_ChartCtrl18;
	afx_msg void OnBnClickedButton2();
};
