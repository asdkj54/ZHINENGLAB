// CQuerysource.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "CQuerysource.h"
#include "afxdialogex.h"


// CQuerysource 对话框

IMPLEMENT_DYNAMIC(CQuerysource, CDialogEx)

CQuerysource::CQuerysource(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Querysource, pParent)
{

}

CQuerysource::~CQuerysource()
{
}

void CQuerysource::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_listQuerysource);
}


BEGIN_MESSAGE_MAP(CQuerysource, CDialogEx)
END_MESSAGE_MAP()


// CQuerysource 消息处理程序


BOOL CQuerysource::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("序号"),TEXT("日期"),TEXT("人员"),TEXT("药品"),TEXT("领用时间"),TEXT("药品用途/用量") };
	for (int i = 0; i < 6; i++)
	{
		m_listQuerysource.InsertColumn(i, str[i], LVCFMT_LEFT, 200);

	}
	m_listQuerysource.InsertItem(0, TEXT("1"));
	m_listQuerysource.SetItemText(0, 1, TEXT("2019年5月1号"));
	m_listQuerysource.SetItemText(0, 2, TEXT("人员1"));
	m_listQuerysource.SetItemText(0, 3, TEXT(""));
	m_listQuerysource.SetItemText(0, 4, TEXT("2019年5月1号11时21分33秒"));
	m_listQuerysource.SetItemText(0, 5, TEXT("实验/30(单位)"));




	m_listQuerysource.SetExtendedStyle(m_listQuerysource.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
