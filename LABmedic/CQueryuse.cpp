// CQueryuse.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "CQueryuse.h"
#include "afxdialogex.h"


// CQueryuse 对话框

IMPLEMENT_DYNAMIC(CQueryuse, CDialogEx)

CQueryuse::CQueryuse(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Queryuse, pParent)
{

}

CQueryuse::~CQueryuse()
{
}

void CQueryuse::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listqueryuse);
}


BEGIN_MESSAGE_MAP(CQueryuse, CDialogEx)
END_MESSAGE_MAP()


// CQueryuse 消息处理程序


BOOL CQueryuse::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("序号"),TEXT("日期"),TEXT("人员"),TEXT("药品"),TEXT("领用时间"),TEXT("药品用途/用量") };
	for (int i = 0; i < 6; i++)
	{
		m_listqueryuse.InsertColumn(i, str[i], LVCFMT_LEFT, 200);

	}
	m_listqueryuse.InsertItem(0, TEXT("1"));
	m_listqueryuse.SetItemText(0, 1, TEXT("2019/05/1"));
	m_listqueryuse.SetItemText(0, 2, TEXT("人员2"));
	m_listqueryuse.SetItemText(0, 3, TEXT("石油醚"));
	m_listqueryuse.SetItemText(0, 4, TEXT("2019年5月1号11时21分33秒"));
	m_listqueryuse.SetItemText(0, 5, TEXT("实验/30(单位)"));


	m_listqueryuse.InsertItem(1, TEXT("2"));
	m_listqueryuse.SetItemText(1, 1, TEXT("2019/05/2"));
	m_listqueryuse.SetItemText(1, 2, TEXT("人员3"));
	m_listqueryuse.SetItemText(1, 3, TEXT("四氯化碳"));
	m_listqueryuse.SetItemText(1, 4, TEXT("2019年5月2号14时29分20秒"));
	m_listqueryuse.SetItemText(1, 5, TEXT("实验/100(单位)"));

	m_listqueryuse.InsertItem(2, TEXT("3"));
	m_listqueryuse.SetItemText(2, 1, TEXT("2019/05/7"));
	m_listqueryuse.SetItemText(2, 2, TEXT("人员3"));
	m_listqueryuse.SetItemText(2, 3, TEXT("氯化钡"));
	m_listqueryuse.SetItemText(2, 4, TEXT("2019年5月7号15时10分07秒"));
	m_listqueryuse.SetItemText(2, 5, TEXT("实验/80(单位)"));

	m_listqueryuse.InsertItem(3, TEXT("4"));
	m_listqueryuse.SetItemText(3, 1, TEXT("2019/05/9"));
	m_listqueryuse.SetItemText(3, 2, TEXT("人员3"));
	m_listqueryuse.SetItemText(3, 3, TEXT("甲醇"));
	m_listqueryuse.SetItemText(3, 4, TEXT("2019年5月9号10时31分53秒"));
	m_listqueryuse.SetItemText(3, 5, TEXT("实验/80(单位)"));

	m_listqueryuse.InsertItem(4, TEXT("5"));
	m_listqueryuse.SetItemText(4, 1, TEXT("2019/05/14"));
	m_listqueryuse.SetItemText(4, 2, TEXT("人员3"));
	m_listqueryuse.SetItemText(4, 3, TEXT("氯化钡"));
	m_listqueryuse.SetItemText(4, 4, TEXT("2019年5月14号15时25分03秒"));
	m_listqueryuse.SetItemText(4, 5, TEXT("实验/80(单位)"));

	m_listqueryuse.InsertItem(5, TEXT("6"));
	m_listqueryuse.SetItemText(5, 1, TEXT("2019/05/17"));
	m_listqueryuse.SetItemText(5, 2, TEXT("人员3"));
	m_listqueryuse.SetItemText(5, 3, TEXT("乙醇"));
	m_listqueryuse.SetItemText(5, 4, TEXT("2019年5月17号10时12分21秒"));
	m_listqueryuse.SetItemText(5, 5, TEXT("实验/80(单位)"));

	m_listqueryuse.SetExtendedStyle(m_listqueryuse.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
