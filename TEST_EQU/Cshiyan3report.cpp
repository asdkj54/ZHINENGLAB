// Cshiyan3report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan3report.h"
#include "afxdialogex.h"


// Cshiyan3report 对话框

IMPLEMENT_DYNAMIC(Cshiyan3report, CDialogEx)

Cshiyan3report::Cshiyan3report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan3report, pParent)
	, m_edits31(_T(""))
	, m_edits32(_T(""))
	, m_edits33(_T(""))
	, m_edits34(_T(""))
	, m_edits35(_T(""))
{

}

Cshiyan3report::~Cshiyan3report()
{
}

void Cshiyan3report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan3);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs3);
	DDX_Text(pDX, IDC_EDIT14, m_edits31);
	DDX_Text(pDX, IDC_EDIT2, m_edits32);
	DDX_Text(pDX, IDC_EDIT4, m_edits33);
	DDX_Text(pDX, IDC_EDIT5, m_edits34);
	DDX_Text(pDX, IDC_EDIT6, m_edits35);
}


BEGIN_MESSAGE_MAP(Cshiyan3report, CDialogEx)
END_MESSAGE_MAP()


// Cshiyan3report 消息处理程序
