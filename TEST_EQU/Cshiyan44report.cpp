// Cshiyan44report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan44report.h"
#include "afxdialogex.h"


// Cshiyan44report 对话框

IMPLEMENT_DYNAMIC(Cshiyan44report, CDialogEx)

Cshiyan44report::Cshiyan44report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan4report, pParent)
	, m_edits41(_T(""))
	, m_edits43(_T(""))
	, m_edits42(_T(""))
	, m_edits44(_T(""))
	, m_edits45(_T(""))
{

}

Cshiyan44report::~Cshiyan44report()
{
}

void Cshiyan44report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan4);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs4);
	DDX_Text(pDX, IDC_EDIT14, m_edits41);
	DDX_Text(pDX, IDC_EDIT4, m_edits43);
	DDX_Text(pDX, IDC_EDIT2, m_edits42);
	DDX_Text(pDX, IDC_EDIT5, m_edits44);
	DDX_Text(pDX, IDC_EDIT6, m_edits45);
}


BEGIN_MESSAGE_MAP(Cshiyan44report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan44report 消息处理程序
