// CDEVICERRSOUCE.cpp: 实现文件
//

#include "stdafx.h"
#include "Deviceresouce.h"
#include "CDEVICERRSOUCE.h"
#include "afxdialogex.h"


// CDEVICERRSOUCE 对话框

IMPLEMENT_DYNAMIC(CDEVICERRSOUCE, CDialogEx)

CDEVICERRSOUCE::CDEVICERRSOUCE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DEVICERESOUCE_DIALOG, pParent)
{

}

CDEVICERRSOUCE::~CDEVICERRSOUCE()
{
}

void CDEVICERRSOUCE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDEVICERRSOUCE, CDialogEx)
END_MESSAGE_MAP()


// CDEVICERRSOUCE 消息处理程序
