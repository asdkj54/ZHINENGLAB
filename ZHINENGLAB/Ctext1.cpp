// Ctext1.cpp: 实现文件
//

#include "stdafx.h"
#include "ZHINENGLAB.h"
#include "Ctext1.h"
#include "afxdialogex.h"


// Ctext1 对话框

IMPLEMENT_DYNAMIC(Ctext1, CDialogEx)

Ctext1::Ctext1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_text1, pParent)
{

}

Ctext1::~Ctext1()
{
}

void Ctext1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Ctext1, CDialogEx)
END_MESSAGE_MAP()


// Ctext1 消息处理程序
