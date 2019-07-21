// Cshiyan8fenxi.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan8fenxi.h"
#include "afxdialogex.h"


// Cshiyan8fenxi 对话框

IMPLEMENT_DYNAMIC(Cshiyan8fenxi, CDialogEx)

Cshiyan8fenxi::Cshiyan8fenxi(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan8fenxi, pParent)
{

}

Cshiyan8fenxi::~Cshiyan8fenxi()
{
}

void Cshiyan8fenxi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CUSTOM81, m_ChartCtrl81);
}


BEGIN_MESSAGE_MAP(Cshiyan8fenxi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan8fenxi::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cshiyan8fenxi 消息处理程序


BOOL Cshiyan8fenxi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CChartAxis *pAxis = NULL;
	pAxis = m_ChartCtrl81.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl81.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);

	TChartString str1;
	str1 = _T("实验数据趋势");
	m_ChartCtrl81.GetTitle()->AddString(str1);

	m_ChartCtrl81.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl81.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl81.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl81.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl81.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Cshiyan8fenxi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
