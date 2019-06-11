// CtestM.cpp: 实现文件
//

#include "stdafx.h"
#include "ZHINENGLAB.h"
#include "CtestM.h"
#include "afxdialogex.h"


// CtestM 对话框

IMPLEMENT_DYNAMIC(CtestM, CDialogEx)

CtestM::CtestM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_testM, pParent)
{

}

CtestM::~CtestM()
{
}

void CtestM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listLabtestM);
}


BEGIN_MESSAGE_MAP(CtestM, CDialogEx)
END_MESSAGE_MAP()


// CtestM 消息处理程序


BOOL CtestM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CString str[] = { TEXT("操作台"),TEXT("日期"),TEXT("操作员"),TEXT("试验样品"),TEXT("试验数据"),TEXT("试验分析") };
	for (int i = 0; i < 6; i++)
	{
		m_listLabtestM.InsertColumn(i, str[i], LVCFMT_LEFT, 150);


	}
	m_listLabtestM.InsertItem(0, TEXT("操作台"));
	m_listLabtestM.SetItemText(0, 1, TEXT("2019/05/**"));
	m_listLabtestM.SetItemText(0, 2, TEXT("操作员1"));
	m_listLabtestM.SetItemText(0, 3, TEXT("甲醛"));
	m_listLabtestM.SetItemText(0, 4, TEXT("****"));
	m_listLabtestM.SetItemText(0, 5, TEXT("样品质量合格"));
	m_listLabtestM.InsertItem(1, TEXT("操作台"));
	m_listLabtestM.SetItemText(1, 1, TEXT("2019/04/**"));
	m_listLabtestM.SetItemText(1, 2, TEXT("操作员3"));
	m_listLabtestM.SetItemText(1, 3, TEXT("卡尔费休试剂"));
	m_listLabtestM.SetItemText(1, 4, TEXT("****"));
	m_listLabtestM.SetItemText(1, 5, TEXT("样品质量合格"));
	m_listLabtestM.InsertItem(2, TEXT("操作台"));
	m_listLabtestM.SetItemText(2, 1, TEXT("2019/05/**"));
	m_listLabtestM.SetItemText(2, 2, TEXT("操作员8"));
	m_listLabtestM.SetItemText(2, 3, TEXT("氯化钡"));
	m_listLabtestM.SetItemText(2, 4, TEXT("****"));
	m_listLabtestM.SetItemText(2, 5, TEXT("样品质量合格"));
	m_listLabtestM.InsertItem(3, TEXT("操作台"));
	m_listLabtestM.SetItemText(3, 1, TEXT("2019/04/**"));
	m_listLabtestM.SetItemText(3, 2, TEXT("操作员2"));
	m_listLabtestM.SetItemText(3, 3, TEXT("氢氧化钾"));
	m_listLabtestM.SetItemText(3, 4, TEXT("****"));
	m_listLabtestM.SetItemText(3, 5, TEXT("样品质量合格"));
	m_listLabtestM.InsertItem(4, TEXT("操作台"));
	m_listLabtestM.SetItemText(4, 1, TEXT("2019/05/**"));
	m_listLabtestM.SetItemText(4, 2, TEXT("操作员7"));
	m_listLabtestM.SetItemText(4, 3, TEXT("石油醚"));
	m_listLabtestM.SetItemText(4, 4, TEXT("****"));
	m_listLabtestM.SetItemText(4, 5, TEXT("样品质量合格"));

	m_listLabtestM.SetExtendedStyle(m_listLabtestM.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
