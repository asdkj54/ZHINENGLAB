// Cshiyan6report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan6report.h"
#include "afxdialogex.h"


// Cshiyan6report 对话框

IMPLEMENT_DYNAMIC(Cshiyan6report, CDialogEx)

Cshiyan6report::Cshiyan6report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan6report, pParent)
	, m_edits61(_T(""))
	, m_edits62(_T(""))
	, m_edits63(_T(""))
	, m_edits64(_T(""))
	, m_edits65(_T(""))
{

}

Cshiyan6report::~Cshiyan6report()
{
}

void Cshiyan6report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan6);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs6);
	DDX_Text(pDX, IDC_EDIT14, m_edits61);
	DDX_Text(pDX, IDC_EDIT2, m_edits62);
	DDX_Text(pDX, IDC_EDIT4, m_edits63);
	DDX_Text(pDX, IDC_EDIT5, m_edits64);
	DDX_Text(pDX, IDC_EDIT6, m_edits65);
}


BEGIN_MESSAGE_MAP(Cshiyan6report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan6report 消息处理程序
