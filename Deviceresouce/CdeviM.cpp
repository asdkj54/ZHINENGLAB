// CdeviM.cpp: 实现文件
//

#include "stdafx.h"
#include "Deviceresouce.h"
#include "CdeviM.h"
#include "afxdialogex.h"


// CdeviM 对话框

IMPLEMENT_DYNAMIC(CdeviM, CDialogEx)

CdeviM::CdeviM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_deviM, pParent)
{

}

CdeviM::~CdeviM()
{
}

void CdeviM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listdev);
}


BEGIN_MESSAGE_MAP(CdeviM, CDialogEx)
END_MESSAGE_MAP()


// CdeviM 消息处理程序


BOOL CdeviM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("工作台"),TEXT("使用人员"),TEXT("设备状态"),TEXT("最近维护日期"), TEXT("下次维护日期")};
	for (int i = 0; i < 5; i++)
	{
		m_listdev.InsertColumn(i, str[i], LVCFMT_LEFT, 150);


	}
	m_listdev.InsertItem(0, TEXT("工作台"));
	m_listdev.SetItemText(0, 1, TEXT("人员1"));
	m_listdev.SetItemText(0, 2, TEXT("状态良好"));
	m_listdev.SetItemText(0, 3, TEXT("2019/5/*"));
	m_listdev.SetItemText(0, 4, TEXT("2020/5/*"));

	m_listdev.InsertItem(1, TEXT("工作台"));
	m_listdev.SetItemText(1, 1, TEXT("人员2"));
	m_listdev.SetItemText(1, 2, TEXT("状态良好"));
	m_listdev.SetItemText(1, 3, TEXT("2019/5/*"));
	m_listdev.SetItemText(1, 4, TEXT("2020/5/*"));

	m_listdev.InsertItem(2, TEXT("工作台"));
	m_listdev.SetItemText(2, 1, TEXT("人员3"));
	m_listdev.SetItemText(2, 2, TEXT("状态良好"));
	m_listdev.SetItemText(2, 3, TEXT("2019/5/*"));
	m_listdev.SetItemText(2, 4, TEXT("2020/5/*"));



	m_listdev.SetExtendedStyle(m_listdev.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
