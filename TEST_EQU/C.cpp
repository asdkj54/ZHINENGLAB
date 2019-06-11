// C.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "C.h"
#include "afxdialogex.h"


// C 对话框

IMPLEMENT_DYNAMIC(C, CDialogEx)

C::C(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_testrecord, pParent)
{

}

C::~C()
{
}

void C::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_listtestrecord);
}

BEGIN_MESSAGE_MAP(C, CDialogEx)
END_MESSAGE_MAP()


// C 消息处理程序


BOOL C::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("工作台"),TEXT("日期"),TEXT("氢气"),TEXT("甲烷"),TEXT("乙烷"),TEXT("乙烯"),TEXT("乙炔"),TEXT("一氧化碳"),TEXT("二氧化碳"),TEXT("总烃") };
	for (int i = 0; i < 10; i++)
	{
		m_listtestrecord.InsertColumn(i, str[i], LVCFMT_LEFT, 150);


	}
	m_listtestrecord.InsertItem(0, TEXT("工作台"));
	m_listtestrecord.SetItemText(0, 1, TEXT("2013/6/24"));
	m_listtestrecord.SetItemText(0, 2, TEXT("3"));
	m_listtestrecord.SetItemText(0, 3, TEXT("19"));
	m_listtestrecord.SetItemText(0, 4, TEXT("9.5"));
	m_listtestrecord.SetItemText(0, 5, TEXT("3.5"));
	m_listtestrecord.SetItemText(0, 6, TEXT("0"));
	m_listtestrecord.SetItemText(0, 7, TEXT("403"));
	m_listtestrecord.SetItemText(0, 8, TEXT("2945"));
	m_listtestrecord.SetItemText(0, 9, TEXT("32"));



	m_listtestrecord.InsertItem(1, TEXT("工作台"));
	m_listtestrecord.SetItemText(1, 1, TEXT("2013/9/22"));
	m_listtestrecord.SetItemText(1, 2, TEXT("6"));
	m_listtestrecord.SetItemText(1, 3, TEXT("18"));
	m_listtestrecord.SetItemText(1, 4, TEXT("9.1"));
	m_listtestrecord.SetItemText(1, 5, TEXT("3.2"));
	m_listtestrecord.SetItemText(1, 6, TEXT("0"));
	m_listtestrecord.SetItemText(1, 7, TEXT("445"));
	m_listtestrecord.SetItemText(1, 8, TEXT("3025"));
	m_listtestrecord.SetItemText(1, 9, TEXT("30.3"));




	m_listtestrecord.InsertItem(2, TEXT("工作台"));
	m_listtestrecord.SetItemText(2, 1, TEXT("2015/2/9"));
	m_listtestrecord.SetItemText(2, 2, TEXT("5"));
	m_listtestrecord.SetItemText(2, 3, TEXT("36.2"));
	m_listtestrecord.SetItemText(2, 4, TEXT("17.8"));
	m_listtestrecord.SetItemText(2, 5, TEXT("5.8"));
	m_listtestrecord.SetItemText(2, 6, TEXT("0"));
	m_listtestrecord.SetItemText(2, 7, TEXT("791"));
	m_listtestrecord.SetItemText(2, 8, TEXT("4694"));
	m_listtestrecord.SetItemText(2, 9, TEXT("59.8"));




	m_listtestrecord.InsertItem(3, TEXT("工作台"));
	m_listtestrecord.SetItemText(3, 1, TEXT("2015/12/29"));
	m_listtestrecord.SetItemText(3, 2, TEXT("0"));
	m_listtestrecord.SetItemText(3, 3, TEXT("19.1"));
	m_listtestrecord.SetItemText(3, 4, TEXT("9.5"));
	m_listtestrecord.SetItemText(3, 5, TEXT("2.9"));
	m_listtestrecord.SetItemText(3, 6, TEXT("0"));
	m_listtestrecord.SetItemText(3, 7, TEXT("396"));
	m_listtestrecord.SetItemText(3, 8, TEXT("3030"));
	m_listtestrecord.SetItemText(3, 9, TEXT("31.1"));



	m_listtestrecord.InsertItem(4, TEXT("工作台"));
	m_listtestrecord.SetItemText(4, 1, TEXT("2017/2/22"));
	m_listtestrecord.SetItemText(4, 2, TEXT("2"));
	m_listtestrecord.SetItemText(4, 3, TEXT("18.6"));
	m_listtestrecord.SetItemText(4, 4, TEXT("10.5"));
	m_listtestrecord.SetItemText(4, 5, TEXT("2.9"));
	m_listtestrecord.SetItemText(4, 6, TEXT("0"));
	m_listtestrecord.SetItemText(4, 7, TEXT("456"));
	m_listtestrecord.SetItemText(4, 8, TEXT("2891"));
	m_listtestrecord.SetItemText(4, 9, TEXT("32"));


	m_listtestrecord.InsertItem(5, TEXT("工作台"));
	m_listtestrecord.SetItemText(5, 1, TEXT("2017/6/2"));
	m_listtestrecord.SetItemText(5, 2, TEXT("4"));
	m_listtestrecord.SetItemText(5, 3, TEXT("19.6"));
	m_listtestrecord.SetItemText(5, 4, TEXT("5.5"));
	m_listtestrecord.SetItemText(5, 5, TEXT("6"));
	m_listtestrecord.SetItemText(5, 6, TEXT("0"));
	m_listtestrecord.SetItemText(5, 7, TEXT("354"));
	m_listtestrecord.SetItemText(5, 8, TEXT("1761"));
	m_listtestrecord.SetItemText(5, 9, TEXT("28"));

	m_listtestrecord.SetExtendedStyle(m_listtestrecord.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
