// Cwork.cpp: 实现文件
//

#include "stdafx.h"
#include "ZHINENGLAB.h"
#include "Cwork.h"
#include "afxdialogex.h"
#include "Resource.h"


// Cwork 对话框

IMPLEMENT_DYNAMIC(Cwork, CDialogEx)

Cwork::Cwork(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_work, pParent)
	
{

}

Cwork::~Cwork()
{
}

void Cwork::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);


	DDX_Control(pDX, IDC_EDIT1, m_editshow1);
}


BEGIN_MESSAGE_MAP(Cwork, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cwork::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &Cwork::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Cwork::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Cwork::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Cwork::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Cwork::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON13, &Cwork::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON12, &Cwork::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON11, &Cwork::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON10, &Cwork::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON9, &Cwork::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON8, &Cwork::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON26, &Cwork::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &Cwork::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &Cwork::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &Cwork::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON31, &Cwork::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON30, &Cwork::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON37, &Cwork::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON19, &Cwork::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON18, &Cwork::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON36, &Cwork::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON35, &Cwork::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON17, &Cwork::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON16, &Cwork::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON34, &Cwork::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON33, &Cwork::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON15, &Cwork::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON32, &Cwork::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON14, &Cwork::OnBnClickedButton14)
	ON_WM_PAINT()

END_MESSAGE_MAP()


// Cwork 消息处理程序


BOOL Cwork::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_editshow1.SetWindowTextW(TEXT("当前工作台闲置"));
	SetDlgItemText(IDC_COMBO1, TEXT("工作台1"));
	dlg.Create(IDD_deviceresourse);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Cwork::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//操作台1的设备状态
	dlg.ShowWindow(SW_SHOWNORMAL);
}


void Cwork::OnBnClickedButton3()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton4()
{
	
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton5()
{
	dlg.ShowWindow(SW_SHOWNORMAL);//
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton6()
{
	
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton7()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton13()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton12()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton11()
{
	
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton10()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton9()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton8()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton26()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton27()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton28()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton29()
{
	
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton31()
{
	
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton30()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton37()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton19()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton18()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton36()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton35()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton17()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton16()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton34()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton33()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton15()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton32()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnBnClickedButton14()
{
	dlg.ShowWindow(SW_SHOWNORMAL);
	// TODO: 在此添加控件通知处理程序代码
}


void Cwork::OnPaint()
{						 // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	
	
	//CDialogEx::OnPaint();********************此处要注释掉
	CPaintDC   dc(this);
	CRect   rect;
	GetClientRect(&rect);    //获取对话框长宽      
	CDC   dcBmp;             //定义并创建一个内存设备环境
	dcBmp.CreateCompatibleDC(&dc);             //创建兼容性DC
	CBitmap   bmpBackground;
	bmpBackground.LoadBitmap(IDB_BITMAP2);    //载入资源中图片
	BITMAP   m_bitmap;                         //图片变量               
	bmpBackground.GetBitmap(&m_bitmap);       //将图片载入位图中
	//将位图选入临时内存设备环境
	CBitmap  *pbmpOld = dcBmp.SelectObject(&bmpBackground);
	//调用函数显示图片StretchBlt显示形状可变
	dc.SetStretchBltMode(HALFTONE);             //***********添加于此,背景失真
	dc.StretchBlt(0, 0, rect.Width(), rect.Height(), &dcBmp, 0, 0, m_bitmap.bmWidth, m_bitmap.bmHeight, SRCCOPY);
	
}



