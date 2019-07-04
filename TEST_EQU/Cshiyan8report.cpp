// Cshiyan8report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan8report.h"
#include "afxdialogex.h"


// Cshiyan8report 对话框

IMPLEMENT_DYNAMIC(Cshiyan8report, CDialogEx)

Cshiyan8report::Cshiyan8report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan8report, pParent)
	, m_edits81(_T(""))
	, m_edits82(_T(""))
	, m_edits83(_T(""))
	, m_edits84(_T(""))
	, m_edits85(_T(""))
{

}

Cshiyan8report::~Cshiyan8report()
{
}

void Cshiyan8report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan8);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs8);
	DDX_Text(pDX, IDC_EDIT14, m_edits81);
	DDX_Text(pDX, IDC_EDIT2, m_edits82);
	DDX_Text(pDX, IDC_EDIT4, m_edits83);
	DDX_Text(pDX, IDC_EDIT5, m_edits84);
	DDX_Text(pDX, IDC_EDIT6, m_edits85);
}


BEGIN_MESSAGE_MAP(Cshiyan8report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan8report 消息处理程序
