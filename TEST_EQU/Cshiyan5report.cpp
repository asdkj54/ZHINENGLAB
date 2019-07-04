// Cshiyan5report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan5report.h"
#include "afxdialogex.h"


// Cshiyan5report 对话框

IMPLEMENT_DYNAMIC(Cshiyan5report, CDialogEx)

Cshiyan5report::Cshiyan5report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan5report, pParent)
	, m_edits51(_T(""))
	, m_edits52(_T(""))
	, m_edits53(_T(""))
	, m_edits54(_T(""))
	, m_edits55(_T(""))
{

}

Cshiyan5report::~Cshiyan5report()
{
}

void Cshiyan5report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan5);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs5);
	DDX_Text(pDX, IDC_EDIT14, m_edits51);
	DDX_Text(pDX, IDC_EDIT2, m_edits52);
	DDX_Text(pDX, IDC_EDIT4, m_edits53);
	DDX_Text(pDX, IDC_EDIT5, m_edits54);
	DDX_Text(pDX, IDC_EDIT6, m_edits55);
}


BEGIN_MESSAGE_MAP(Cshiyan5report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan5report 消息处理程序
