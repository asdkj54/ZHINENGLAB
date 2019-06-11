// CresoM.cpp: 实现文件
//

#include "stdafx.h"
#include "Deviceresouce.h"
#include "CresoM.h"
#include "afxdialogex.h"


// CresoM 对话框

IMPLEMENT_DYNAMIC(CresoM, CDialogEx)

CresoM::CresoM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_resoM, pParent)
{

}

CresoM::~CresoM()
{
}

void CresoM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listres);
}


BEGIN_MESSAGE_MAP(CresoM, CDialogEx)
END_MESSAGE_MAP()


// CresoM 消息处理程序


BOOL CresoM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("工作台"),TEXT("物资存量"),TEXT("使用人员"),TEXT("最近使用日期"),TEXT("用途/用量") };
	for (int i = 0; i < 5; i++)
	{
		m_listres.InsertColumn(i, str[i], LVCFMT_LEFT, 150);


	}
	m_listres.InsertItem(0, TEXT("工作台"));
	m_listres.SetItemText(0, 1, TEXT("XX（单位）"));
	m_listres.SetItemText(0, 2, TEXT("人员1"));
	m_listres.SetItemText(0, 3, TEXT("2019/5/*"));
	m_listres.SetItemText(0, 4, TEXT("试验/X（单位）"));

	m_listres.InsertItem(1, TEXT("工作台"));
	m_listres.SetItemText(1, 1, TEXT("XX（单位）"));
	m_listres.SetItemText(1, 2, TEXT("人员3"));
	m_listres.SetItemText(1, 3, TEXT("2019/5/*"));
	m_listres.SetItemText(1, 4, TEXT("试验/X（单位）"));

	m_listres.InsertItem(2, TEXT("工作台"));
	m_listres.SetItemText(2, 1, TEXT("XX（单位）"));
	m_listres.SetItemText(2, 2, TEXT("人员6"));
	m_listres.SetItemText(2, 3, TEXT("2019/5/*"));
	m_listres.SetItemText(2, 4, TEXT("试验/X（单位）"));



	m_listres.SetExtendedStyle(m_listres.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
