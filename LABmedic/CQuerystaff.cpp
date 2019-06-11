// CQuerystaff.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "CQuerystaff.h"
#include "afxdialogex.h"


// CQuerystaff 对话框

IMPLEMENT_DYNAMIC(CQuerystaff, CDialogEx)

CQuerystaff::CQuerystaff(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Querystaff, pParent)
{

}

CQuerystaff::~CQuerystaff()
{
}

void CQuerystaff::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listQuerystaff);
}


BEGIN_MESSAGE_MAP(CQuerystaff, CDialogEx)
END_MESSAGE_MAP()


// CQuerystaff 消息处理程序


BOOL CQuerystaff::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("序号"),TEXT("日期"),TEXT("人员"),TEXT("药品"),TEXT("领用时间"),TEXT("药品用途/用量") };
	for (int i = 0; i < 6; i++)
	{
		m_listQuerystaff.InsertColumn(i, str[i], LVCFMT_LEFT, 200);

	}
	m_listQuerystaff.InsertItem(0, TEXT("1"));
	m_listQuerystaff.SetItemText(0, 1, TEXT("2019年5月1号"));
	m_listQuerystaff.SetItemText(0, 2, TEXT(""));
	m_listQuerystaff.SetItemText(0, 3, TEXT("氯化钡"));
	m_listQuerystaff.SetItemText(0, 4, TEXT("11时21分33秒"));
	m_listQuerystaff.SetItemText(0, 5, TEXT("实验/30(单位)"));


	m_listQuerystaff.InsertItem(1, TEXT("2"));
	m_listQuerystaff.SetItemText(1, 1, TEXT("2019年5月7号"));
	m_listQuerystaff.SetItemText(1, 2, TEXT(""));
	m_listQuerystaff.SetItemText(1, 3, TEXT("乙醇"));
	m_listQuerystaff.SetItemText(1, 4, TEXT("15时10分07秒"));
	m_listQuerystaff.SetItemText(1, 5, TEXT("实验/100(单位)"));

	m_listQuerystaff.InsertItem(2, TEXT("3"));
	m_listQuerystaff.SetItemText(2, 1, TEXT("2019年5月14号"));
	m_listQuerystaff.SetItemText(2, 2, TEXT(""));
	m_listQuerystaff.SetItemText(2, 3, TEXT("乙腈"));
	m_listQuerystaff.SetItemText(2, 4, TEXT("15时25分03秒"));
	m_listQuerystaff.SetItemText(2, 5, TEXT("实验/80(单位)"));


	m_listQuerystaff.SetExtendedStyle(m_listQuerystaff.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
