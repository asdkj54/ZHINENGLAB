// CtestM.cpp: 实现文件
//

#include "stdafx.h"
#include "ZHINENGLAB.h"
#include "CtestM.h"
#include "afxdialogex.h"
#include"Ctext1.h"
#include"Ctext2.h"
#include"Ctext3.h"
#include"Ctext4.h"
#include"Ctext5.h"
#include"Ctext6.h"
#include"Ctext7.h"
#include"Ctext8.h"
#include"Ctext9.h"
#include"Ctext10.h"

// CtestM 对话框

IMPLEMENT_DYNAMIC(CtestM, CDialogEx)

CtestM::CtestM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_testM, pParent)
{

}

CtestM::~CtestM()
{
}

void CtestM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_LIST1, m_listLabtestM);
}


BEGIN_MESSAGE_MAP(CtestM, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CtestM::OnBnClickedButton1)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON3, &CtestM::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CtestM::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CtestM::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CtestM::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CtestM::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CtestM::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CtestM::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON2, &CtestM::OnBnClickedButton2)
END_MESSAGE_MAP()


// CtestM 消息处理程序


BOOL CtestM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	// TODO: 在此添加额外的初始化代码
	dlgt1.Create(IDD_text1);
	dlgt2.Create(IDD_text2);
	dlgt3.Create(IDD_text3);
	dlgt4.Create(IDD_text4);
	dlgt5.Create(IDD_text5);
	dlgt6.Create(IDD_text6);
	dlgt7.Create(IDD_text7);
	dlgt8.Create(IDD_text8);
	dlgt9.Create(IDD_text9);
	dlgt10.Create(IDD_text10);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CtestM::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt1.ShowWindow(SW_SHOWNORMAL);

}


void CtestM::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
	CRect   rect;
	GetClientRect(&rect);    //获取对话框长宽      
	CDC   dcBmp;             //定义并创建一个内存设备环境
	dcBmp.CreateCompatibleDC(&dc);             //创建兼容性DC
	CBitmap   bmpBackground;
	bmpBackground.LoadBitmap(IDB_BITMAP1);    //载入资源中图片
	BITMAP   m_bitmap;                         //图片变量               
	bmpBackground.GetBitmap(&m_bitmap);       //将图片载入位图中
	//将位图选入临时内存设备环境
	CBitmap  *pbmpOld = dcBmp.SelectObject(&bmpBackground);
	//调用函数显示图片StretchBlt显示形状可变
	dc.SetStretchBltMode(HALFTONE);             //***********添加于此,背景失真
	dc.StretchBlt(0, 0, rect.Width(), rect.Height(), &dcBmp, 0, 0, m_bitmap.bmWidth, m_bitmap.bmHeight, SRCCOPY);

}


void CtestM::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt2.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt3.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt4.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt5.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt6.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt7.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt8.ShowWindow(SW_SHOWNORMAL);
}


void CtestM::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	dlgt9.ShowWindow(SW_SHOWNORMAL);
}
