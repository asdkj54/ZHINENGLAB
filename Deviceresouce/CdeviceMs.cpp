// CdeviceMs.cpp: 实现文件
//

#include "stdafx.h"
#include "Deviceresouce.h"
#include "CdeviceMs.h"
#include "afxdialogex.h"


// CdeviceMs 对话框

IMPLEMENT_DYNAMIC(CdeviceMs, CDialogEx)

CdeviceMs::CdeviceMs(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_deviceMs, pParent)
{

}

CdeviceMs::~CdeviceMs()
{
}

void CdeviceMs::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CdeviceMs, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CdeviceMs::OnBnClickedButton1)
	ON_WM_PAINT()
	
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CdeviceMs 消息处理程序


void CdeviceMs::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg.ShowWindow(SW_SHOWNORMAL);
}


BOOL CdeviceMs::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	// TODO: 在此添加额外的初始化代码
	dlg.Create(IDD_deviM);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CdeviceMs::OnPaint()
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
//HBRUSH CdeviceMs::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
//{
//	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);
//
//	// TODO:  在此更改 DC 的任何特性
//	static CBrush gBr;
//	static bool isInited = false;
//	if (!isInited)
//	{
//		CBitmap bitmap;
//		bitmap.LoadBitmap(IDB_BITMAP1);
//		gBr.CreatePatternBrush(&bitmap);
//		COLORREF clearColor = -1;
//		bitmap.DeleteObject();
//		isInited = true;
//	}
//	if (pWnd == this)
//	{
//		pDC->SetBkMode(TRANSPARENT);
//		return gBr; //主窗口背景使用这个背景刷
//	}
//	else
//	{
//		pDC->SetBkMode(TRANSPARENT);
//		return   (HBRUSH)::GetStockObject(NULL_BRUSH); //其他控件使用透明背景
//	}
//
//
//	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
//	return hbr;
//
//}
//
