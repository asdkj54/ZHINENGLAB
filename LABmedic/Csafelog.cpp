// Csafelog.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "Csafelog.h"
#include "afxdialogex.h"


// Csafelog 对话框

IMPLEMENT_DYNAMIC(Csafelog, CDialogEx)

Csafelog::Csafelog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_safelog, pParent)
{

}

Csafelog::~Csafelog()
{
}

void Csafelog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT2, m_editcontrol1);
}


BEGIN_MESSAGE_MAP(Csafelog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Csafelog::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT2, &Csafelog::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT1, &Csafelog::OnEnChangeEdit1)
END_MESSAGE_MAP()


// Csafelog 消息处理程序


void Csafelog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(TEXT("录入信息成功!"));
}


void Csafelog::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码

}


void Csafelog::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
