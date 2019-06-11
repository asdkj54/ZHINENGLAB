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
}


BEGIN_MESSAGE_MAP(Cshuyan1fenxi, CDialogEx)
END_MESSAGE_MAP()


// Cshuyan1fenxi 消息处理程序


BOOL Cshuyan1fenxi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
