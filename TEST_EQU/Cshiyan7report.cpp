// Cshiyan7report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan7report.h"
#include "afxdialogex.h"


// Cshiyan7report 对话框

IMPLEMENT_DYNAMIC(Cshiyan7report, CDialogEx)

Cshiyan7report::Cshiyan7report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan7report, pParent)
	, m_edits71(_T(""))
	, m_edits72(_T(""))
	, m_edits73(_T(""))
	, m_edits74(_T(""))
	, m_edits75(_T(""))
{

}

Cshiyan7report::~Cshiyan7report()
{
}

void Cshiyan7report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan7);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs7);
	DDX_Text(pDX, IDC_EDIT14, m_edits71);
	DDX_Text(pDX, IDC_EDIT2, m_edits72);
	DDX_Text(pDX, IDC_EDIT4, m_edits73);
	DDX_Text(pDX, IDC_EDIT5, m_edits74);
	DDX_Text(pDX, IDC_EDIT6, m_edits75);
}


BEGIN_MESSAGE_MAP(Cshiyan7report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan7report 消息处理程序
