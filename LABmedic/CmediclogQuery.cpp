// CmediclogQuery.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "CmediclogQuery.h"
#include "afxdialogex.h"


// CmediclogQuery 对话框

IMPLEMENT_DYNAMIC(CmediclogQuery, CDialogEx)

CmediclogQuery::CmediclogQuery(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_mediclogQuery, pParent)
{

}

CmediclogQuery::~CmediclogQuery()
{
}

void CmediclogQuery::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listQuery);
}


BEGIN_MESSAGE_MAP(CmediclogQuery, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CmediclogQuery::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CmediclogQuery::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CmediclogQuery::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CmediclogQuery::OnBnClickedButton4)
END_MESSAGE_MAP()


// CmediclogQuery 消息处理程序


BOOL CmediclogQuery::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	dlg.Create(IDD_Querydate);
	dlg1.Create(IDD_Querysource);
	dlg2.Create(IDD_Querystaff);
	dlg3.Create(IDD_Queryuse);

	CString str[] = { TEXT("序号"),TEXT("日期"),TEXT("人员"),TEXT("药品"),TEXT("领用时间"),TEXT("药品用途/用量") };
	for (int i = 0; i < 6; i++)
	{
		m_listQuery.InsertColumn(i, str[i], LVCFMT_LEFT, 200);

	}

	m_listQuery.InsertItem(0, TEXT("1"));
	m_listQuery.SetItemText(0, 1,TEXT("2019年5月1号"));
	m_listQuery.SetItemText(0, 2, TEXT("人员2"));
	m_listQuery.SetItemText(0, 3, TEXT("石油醚"));
	m_listQuery.SetItemText(0, 4, TEXT("2019年5月1号11时21分33秒"));
	m_listQuery.SetItemText(0, 5, TEXT("实验/30(单位)"));


	m_listQuery.InsertItem(1, TEXT("2"));
	m_listQuery.SetItemText(1, 1,TEXT("2019年5月2号"));
	m_listQuery.SetItemText(1, 2, TEXT("人员3"));
	m_listQuery.SetItemText(1, 3, TEXT("四氯化碳"));
	m_listQuery.SetItemText(1, 4, TEXT("2019年5月2号14时29分20秒"));
	m_listQuery.SetItemText(1, 5, TEXT("实验/100(单位)"));

	m_listQuery.InsertItem(2, TEXT("3"));
	m_listQuery.SetItemText(2, 1, TEXT("2019年5月7号"));
	m_listQuery.SetItemText(2, 2, TEXT("人员3"));
	m_listQuery.SetItemText(2, 3, TEXT("氯化钡"));
	m_listQuery.SetItemText(2, 4, TEXT("2019年5月7号15时10分07秒"));
	m_listQuery.SetItemText(2, 5, TEXT("实验/80(单位)"));

	m_listQuery.InsertItem(3, TEXT("4"));
	m_listQuery.SetItemText(3, 1, TEXT("2019年5月9号"));
	m_listQuery.SetItemText(3, 2, TEXT("人员3"));
	m_listQuery.SetItemText(3, 3, TEXT("甲醇"));
	m_listQuery.SetItemText(3, 4, TEXT("2019年5月9号10时31分53秒"));
	m_listQuery.SetItemText(3, 5, TEXT("实验/80(单位)"));

	m_listQuery.InsertItem(4, TEXT("5"));
	m_listQuery.SetItemText(4, 1, TEXT("2019年5月14号"));
	m_listQuery.SetItemText(4, 2, TEXT("人员3"));
	m_listQuery.SetItemText(4, 3, TEXT("氯化钡"));
	m_listQuery.SetItemText(4, 4, TEXT("2019年5月14号15时25分03秒"));
	m_listQuery.SetItemText(4, 5, TEXT("实验/80(单位)"));


	m_listQuery.InsertItem(5, TEXT("6"));
	m_listQuery.SetItemText(5, 1, TEXT("2019年5月17号"));
	m_listQuery.SetItemText(5, 2, TEXT("人员3"));
	m_listQuery.SetItemText(5, 3, TEXT("乙醇"));
	m_listQuery.SetItemText(5, 4, TEXT("2019年5月17号10时12分21秒"));
	m_listQuery.SetItemText(5, 5, TEXT("实验/80(单位)"));

	m_listQuery.SetExtendedStyle(m_listQuery.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CmediclogQuery::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg.ShowWindow(SW_SHOWNORMAL);
}


void CmediclogQuery::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg1.ShowWindow(SW_SHOWNORMAL);
}


void CmediclogQuery::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg2.ShowWindow(SW_SHOWNORMAL);
}


void CmediclogQuery::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg3.ShowWindow(SW_SHOWNORMAL);
}
