// Cshuyan1fenxi.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshuyan1fenxi.h"
#include "afxdialogex.h"


// Cshuyan1fenxi 对话框

IMPLEMENT_DYNAMIC(Cshuyan1fenxi, CDialogEx)

Cshuyan1fenxi::Cshuyan1fenxi(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan1fenxi, pParent)
{

}

Cshuyan1fenxi::~Cshuyan1fenxi()
{
}

void Cshuyan1fenxi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_CUSTOM11, m_ChartCtrl11);
	DDX_Control(pDX, IDC_CUSTOM12, m_ChartCtrl12);
	DDX_Control(pDX, IDC_CUSTOM13, m_ChartCtrl13);
	DDX_Control(pDX, IDC_CUSTOM14, m_ChartCtrl14);
	DDX_Control(pDX, IDC_CUSTOM15, m_ChartCtrl15);
	DDX_Control(pDX, IDC_CUSTOM16, m_ChartCtrl16);
	DDX_Control(pDX, IDC_CUSTOM17, m_ChartCtrl17);
	DDX_Control(pDX, IDC_CUSTOM18, m_ChartCtrl18);
	
}


BEGIN_MESSAGE_MAP(Cshuyan1fenxi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &Cshuyan1fenxi::OnBnClickedButton2)
END_MESSAGE_MAP()


// Cshuyan1fenxi 消息处理程序


BOOL Cshuyan1fenxi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CChartAxis *pAxis = NULL;
	pAxis = m_ChartCtrl11.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl11.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl12.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl12.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl13.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl13.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl14.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl14.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl15.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl15.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl16.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl16.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl17.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl17.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl18.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl18.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	//***********添加标题
	TChartString str1;
	TChartString str2;
	TChartString str3;
	TChartString str4;
	TChartString str5;
	TChartString str6;
	TChartString str7;
	TChartString str8;

	str1 = _T("氢气");
	str2 = _T("甲烷");
	m_ChartCtrl11.GetTitle()->AddString(str1);
	m_ChartCtrl12.GetTitle()->AddString(str2);
	str3 = _T("乙烷");
	str4 = _T("乙烯");
	m_ChartCtrl13.GetTitle()->AddString(str3);
	m_ChartCtrl14.GetTitle()->AddString(str4);
	str5 = _T("乙炔");
	str6 = _T("一氧化碳");
	m_ChartCtrl15.GetTitle()->AddString(str5);
	m_ChartCtrl16.GetTitle()->AddString(str6);
	str7 = _T("二氧化碳");
	str8 = _T("总烃");
	m_ChartCtrl17.GetTitle()->AddString(str7);
	m_ChartCtrl18.GetTitle()->AddString(str8);
	//************绘图背景

	m_ChartCtrl11.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl11.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl11.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl11.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl11.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl12.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl12.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl12.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl12.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl12.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl13.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl13.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl13.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl13.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl13.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl14.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl14.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl14.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl14.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl14.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl15.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl15.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl15.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl15.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl15.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl16.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl16.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl16.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl16.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl16.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl17.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl17.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl17.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl17.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl17.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl18.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl18.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl18.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl18.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl18.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Cshuyan1fenxi::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
}
