// CQuerydate.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "CQuerydate.h"
#include "afxdialogex.h"


// CQuerydate 对话框

IMPLEMENT_DYNAMIC(CQuerydate, CDialogEx)

CQuerydate::CQuerydate(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Querydate, pParent)
{

}

CQuerydate::~CQuerydate()
{
}

void CQuerydate::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listquerydate);
}


BEGIN_MESSAGE_MAP(CQuerydate, CDialogEx)
END_MESSAGE_MAP()


// CQuerydate 消息处理程序


BOOL CQuerydate::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("序号"),TEXT("日期"),TEXT("人员"),TEXT("药品"),TEXT("领用时间"),TEXT("药品用途/用量") };
	for (int i = 0; i < 6; i++)
	{
		m_listquerydate.InsertColumn(i, str[i], LVCFMT_LEFT, 200);

	}
	m_listquerydate.InsertItem(0, TEXT("1"));
	m_listquerydate.SetItemText(0, 1, TEXT(""));
	m_listquerydate.SetItemText(0, 2, TEXT("人员1"));
	m_listquerydate.SetItemText(0, 3, TEXT("石油醚"));
	m_listquerydate.SetItemText(0, 4, TEXT("8时21分31秒"));
	m_listquerydate.SetItemText(0, 5, TEXT("实验/30(单位)"));




	m_listquerydate.SetExtendedStyle(m_listquerydate.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
