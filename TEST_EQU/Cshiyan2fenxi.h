#pragma once
#include "ChartCtrl/ChartCtrl.h"
#include "ChartCtrl/ChartTitle.h"
#include "ChartCtrl/ChartLineSerie.h"
#include "ChartCtrl/ChartMouseListener.h"
#include "DataBaseADO.h"
// Cshiyan2fenxi 对话框

class Cshiyan2fenxi : public CDialogEx
{
	DECLARE_DYNAMIC(Cshiyan2fenxi)

public:
	Cshiyan2fenxi(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cshiyan2fenxi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_shiyan2fenxi };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CChartCtrl m_ChartCtrl21;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
public:

private:
	CString VariantToCString(_variant_t var);
	CDataBaseADO m_DataBase;
};
