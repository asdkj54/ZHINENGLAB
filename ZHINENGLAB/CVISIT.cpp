// CVISIT.cpp: 实现文件
//

#include "stdafx.h"
#include "ZHINENGLAB.h"
#include "CVISIT.h"
#include "afxdialogex.h"


// CVISIT 对话框

IMPLEMENT_DYNAMIC(CVISIT, CDialogEx)

CVISIT::CVISIT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_VISIT, pParent)
{

}

CVISIT::~CVISIT()
{
}

void CVISIT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CVISIT, CDialogEx)
END_MESSAGE_MAP()


// CVISIT 消息处理程序
