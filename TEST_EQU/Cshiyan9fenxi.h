#pragma once

#include "ChartCtrl/ChartCtrl.h"
#include "ChartCtrl/ChartTitle.h"
#include "ChartCtrl/ChartLineSerie.h"
#include "ChartCtrl/ChartMouseListener.h"
// Cshiyan9fenxi 对话框
#include "DataBaseADO.h"
class Cshiyan9fenxi : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan9fenxi)

public:
	Cshiyan9fenxi(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan9fenxi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan9fenxi };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
public:
	CChartCtrl m_ChartCtrl91;
	afx_msg void OnBnClickedButton1();
public:

private:
	CString VariantToCString(_variant_t var);
	CDataBaseADO m_DataBase;
};
