// Cshiyan2fenxi.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan2fenxi.h"
#include "afxdialogex.h"


// Cshiyan2fenxi 对话框

IMPLEMENT_DYNAMIC(Cshiyan2fenxi, CDialogEx)

Cshiyan2fenxi::Cshiyan2fenxi(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan2fenxi, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

Cshiyan2fenxi::~Cshiyan2fenxi()
{
}

void Cshiyan2fenxi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CUSTOM21, m_ChartCtrl21);
}


BEGIN_MESSAGE_MAP(Cshiyan2fenxi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan2fenxi::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cshiyan2fenxi 消息处理程序


BOOL Cshiyan2fenxi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CChartAxis *pAxis = NULL;
	pAxis = m_ChartCtrl21.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl21.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);

	TChartString str1;
	str1 = _T("实验数据趋势");
	m_ChartCtrl21.GetTitle()->AddString(str1);

	m_ChartCtrl21.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl21.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl21.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl21.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl21.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Cshiyan2fenxi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
