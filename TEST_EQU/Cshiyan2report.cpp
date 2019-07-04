// Cshiyan2report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan2report.h"
#include "afxdialogex.h"


// Cshiyan2report 对话框

IMPLEMENT_DYNAMIC(Cshiyan2report, CDialogEx)

Cshiyan2report::Cshiyan2report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan2report, pParent)
	, m_edits21(_T(""))
	, m_edits22(_T(""))
	, m_edits25(_T(""))
	, m_edits24(_T(""))
	, m_edits23(_T(""))
{

}

Cshiyan2report::~Cshiyan2report()
{
}

void Cshiyan2report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan2);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs2);
	DDX_Text(pDX, IDC_EDIT14, m_edits21);
	DDX_Text(pDX, IDC_EDIT2, m_edits22);
	DDX_Text(pDX, IDC_EDIT6, m_edits25);
	DDX_Text(pDX, IDC_EDIT5, m_edits24);
	DDX_Text(pDX, IDC_EDIT4, m_edits23);
}


BEGIN_MESSAGE_MAP(Cshiyan2report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan2report 消息处理程序
