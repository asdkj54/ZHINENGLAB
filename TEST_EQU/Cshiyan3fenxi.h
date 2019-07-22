#pragma once

#include "ChartCtrl/ChartCtrl.h"
#include "ChartCtrl/ChartTitle.h"
#include "ChartCtrl/ChartLineSerie.h"
#include "ChartCtrl/ChartMouseListener.h"
// Cshiyan3fenxi 对话框
#include "DataBaseADO.h"
class Cshiyan3fenxi : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan3fenxi)

public:
	Cshiyan3fenxi(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan3fenxi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan3fenxi };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
public:
	CChartCtrl m_ChartCtrl31;
	afx_msg void OnBnClickedButton1();
public:
	CString VariantToCString(_variant_t var);
private:

	CDataBaseADO m_DataBase;
};
