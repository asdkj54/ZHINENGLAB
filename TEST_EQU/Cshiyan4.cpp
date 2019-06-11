// Cshiyan4.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan4.h"
#include "afxdialogex.h"


// Cshiyan4 对话框

IMPLEMENT_DYNAMIC(Cshiyan4, CDialogEx)

Cshiyan4::Cshiyan4(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan4, pParent)
{

}

Cshiyan4::~Cshiyan4()
{
}

void Cshiyan4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cshiyan4, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan4::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Cshiyan4 消息处理程序


void Cshiyan4::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(TEXT("试验报表生成！"));
}


void Cshiyan4::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
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
