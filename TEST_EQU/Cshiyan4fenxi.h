#pragma once

#include "ChartCtrl/ChartCtrl.h"
#include "ChartCtrl/ChartTitle.h"
#include "ChartCtrl/ChartLineSerie.h"
#include "ChartCtrl/ChartMouseListener.h"
#include "DataBaseADO.h"
// Cshiyan4fenxi 对话框

class Cshiyan4fenxi : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan4fenxi)

public:
	Cshiyan4fenxi(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan4fenxi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan4fenxi };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
public:
	CChartCtrl m_ChartCtrl41;
	afx_msg void OnBnClickedButton1();
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
};
