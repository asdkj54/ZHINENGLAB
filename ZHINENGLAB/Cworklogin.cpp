// Cworklogin.cpp: 实现文件
//

#include "stdafx.h"
#include "ZHINENGLAB.h"
#include "Cworklogin.h"
#include "afxdialogex.h"


// Cworklogin 对话框

IMPLEMENT_DYNAMIC(Cworklogin, CDialogEx)

Cworklogin::Cworklogin(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_worklogin, pParent)
{

}

Cworklogin::~Cworklogin()
{
}

void Cworklogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cworklogin, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cworklogin::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cworklogin 消息处理程序


void Cworklogin::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg.ShowWindow(SW_SHOWNORMAL);
}


BOOL Cworklogin::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	dlg.Create(IDD_work);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
