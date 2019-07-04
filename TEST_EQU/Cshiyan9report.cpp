// Cshiyan9report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan9report.h"
#include "afxdialogex.h"


// Cshiyan9report 对话框

IMPLEMENT_DYNAMIC(Cshiyan9report, CDialogEx)

Cshiyan9report::Cshiyan9report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan9report, pParent)
	, m_edits91(_T(""))
	, m_edits92(_T(""))
	, m_edits93(_T(""))
	, m_edits94(_T(""))
	, m_edits95(_T(""))
{

}

Cshiyan9report::~Cshiyan9report()
{
}

void Cshiyan9report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan9);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs9);
	DDX_Text(pDX, IDC_EDIT14, m_edits91);
	DDX_Text(pDX, IDC_EDIT2, m_edits92);
	DDX_Text(pDX, IDC_EDIT4, m_edits93);
	DDX_Text(pDX, IDC_EDIT5, m_edits94);
	DDX_Text(pDX, IDC_EDIT6, m_edits95);
}


BEGIN_MESSAGE_MAP(Cshiyan9report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan9report 消息处理程序
