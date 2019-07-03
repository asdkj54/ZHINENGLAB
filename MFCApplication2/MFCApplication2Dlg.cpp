
// MFCApplication2Dlg.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "MFCApplication2Dlg.h"
#include "afxdialogex.h"
#include<opencv2\opencv.hpp>  
#include<opencv2\highgui\highgui.hpp>  
#include<opencv2\imgproc\imgproc.hpp>  
#include<iostream>  
#include<stdio.h>  
#include "afxdialogex.h"
#include <string>
using namespace cv;
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication2Dlg 对话框



CMFCApplication2Dlg::CMFCApplication2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION2_DIALOG, pParent)
	, m_insert1(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);


	DDX_Control(pDX, IDC_LIST1, m_ListCtrl);
	DDX_Control(pDX, IDC_EDIT1, insert);
	DDX_Text(pDX, IDC_EDIT1, m_insert1);
	DDX_Control(pDX, IDC_COMBO2, m_combox2);
}

BEGIN_MESSAGE_MAP(CMFCApplication2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication2Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication2Dlg::OnBnClickedButton11)

	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication2Dlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CMFCApplication2Dlg 消息处理程序

BOOL CMFCApplication2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	//dlg1.Create(IDD_DIALOG1);
	//dlg2.Create(IDD_DIALOG2);
	//dlg3.Create(IDD_DIALOG3);
	//m_combobox1.AddString(TEXT("1"));
	//m_combobox1.AddString(TEXT("2"));
	//m_combobox1.AddString(TEXT("3"));
	m_combox2.InsertString(0, _T("兰州拉面"));
	m_combox2.InsertString(1, _T("青州小菜"));
	m_combox2.SetCurSel(0); //设置第一行为默认显示的内容
	
	CRect rc;
	m_ListCtrl.GetWindowRect(&rc);	//获取控件大小
	//设置了四列，大小是一样的
	m_ListCtrl.InsertColumn(0, _T("序号"), LVCFMT_CENTER, rc.Size().cx / 4, 0);
	m_ListCtrl.InsertColumn(1, _T("学号"), LVCFMT_CENTER, rc.Size().cx / 4, 1);
	m_ListCtrl.InsertColumn(2, _T("姓名"), LVCFMT_CENTER, rc.Size().cx / 4, 2);
	m_ListCtrl.InsertColumn(3, _T("班级"), LVCFMT_CENTER, rc.Size().cx / 4, 3);
	//LVS_EX_GRIDLINES是希望显示网格；LVS_EX_FULLROWSELECT是希望被选中时整行反色显示；LVS_EX_HEADERDRAGDROP是让其支持点击表头排序；LVS_EX_TWOCLICKACTIVATE是希望有鼠标在未被选中的行上移动的时候有一些效果
	m_ListCtrl.SetExtendedStyle(m_ListCtrl.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP/* | LVS_EX_TWOCLICKACTIVATE*/);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void CMFCApplication2Dlg::OnBnClickedButton1()
{
	
	
	// TODO: 在此添加控件通知处理程序代码
}

	





void CMFCApplication2Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("stu_id");
	vName.push_back("stu_num");
	vName.push_back("stu_name");
	vName.push_back("stu_class");
	//查询结果
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(L"select * from student"), vName));
	m_ListCtrl.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_ListCtrl.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_ListCtrl.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_ListCtrl.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_ListCtrl.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
	}
	m_DataBase.Close();	//记得要关闭连接

}


CString CMFCApplication2Dlg::VariantToCString(_variant_t var)
{
	CString str; //转换以后的字符串

	////以下代码演示如何转换为C标准字符串型
	//if (var.vt == VT_I4)
	//{
	//	long lNum;
	//	char szCh[21];
	//	str=var.bstrVal;
	//	WideCharToMultiByte 
	//		(CP_ACP, 0, var.bstrVal, -1,
	//		szCh, sizeof(szCh), NULL, NULL);
	//}

	////以下代码演示如何转换成逻辑型
	//if( var.vt == VT_BOOL)
	//{
	//	BOOL bVar;
	//	LONG lNum=var.lVal;
	//	bVar= var.boolVar==0? FALSE : TRUE;
	//}
	//以下代码演示为其余类型（补充）
	switch (var.vt)
	{

	case VT_BSTR:         //var is BSTR type
		str = var.bstrVal;
		break;

	case VT_I2:           //var is short int type 
		str.Format(L"%d", (int)var.iVal);
		break;

	case VT_I4:          //var is long int type
		str.Format(L"%d", var.lVal);
		break;

	case VT_R4:         //var is float type
		str.Format(L"%10.6f", (double)var.fltVal);
		break;

	case VT_R8:         //var is double type
		str.Format(L"%10.6f", var.dblVal);
		break;

	case VT_CY:        //var is CY type
		str = COleCurrency(var).Format();
		break;

	case VT_DATE:     //var is DATE type
		str = COleDateTime(var).Format();
		break;

	case VT_BOOL:     //var is  VARIANT_BOOL
		str = (var.boolVal == 0) ? L"FALSE" : L"TRUE";
		break;

	default:
		str.Format(L"Unk type %d\n", var.vt);
		TRACE(L"Unknown type %d\n", var.vt);
	}
	return str;
}

void CMFCApplication2Dlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	CString sqlcode1;
	CString strSQL; //存放sql语句
	
	UpdateData(TRUE);
	sqlcode1 = m_insert1;
	strSQL.Format(_T("insert into student values( '20101616', 'sdadsd', '%s')"), m_insert1);
	m_DataBase.ExcuteSQL((_bstr_t)strSQL);
	UpdateData(FALSE);


}




void CMFCApplication2Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	//int index = m_combox2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	//CString strI;
	//strI.Format(_T("%d"), index);
	//CString strC;
	//m_combox2.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	//strC += strI;
	//CString stri;
	//stri = strC;
	////string.Format("%d%s", m_age, m_address); //将变量组装到字符串中

	//MessageBox(stri, TEXT(""), MB_OK);
	//if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
	//	return;
	//CString sqlcode2;
	//CString strSQL; //存放sql语句

	//
	//sqlcode2 = strC;
	//strSQL.Format(_T("insert into student values( '20101616', 'sdadsd', '%s')"),sqlcode2);
	//m_DataBase.ExcuteSQL((_bstr_t)strSQL);
	showsqlorder();
	//UpdateData(FALSE);
	//index = m_combox2.FindStringExact(0, _T("Bob"));    //检索下来列表中是否有Bob这个字符串  
	//if (CB_ERR != index)
	//{
	//	strC.Format(_T("%d"), index);
	//	MessageBox(strC);
	//	m_cb1.DeleteString(index);    //如果有的话，删除  
	//}
}


void CMFCApplication2Dlg::showsqlorder()
{
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("stu_id");
	vName.push_back("stu_num");
	vName.push_back("stu_name");
	vName.push_back("stu_class");
	//查询结果
	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_combox2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_combox2.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString str11;
	str11 = strC;
	CString sqlcode2;
	CString strSQL; //存放sql语句
	sqlcode2 = strC;
	strSQL.Format(_T("select * from student where stu_class = '%s'"), sqlcode2);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_ListCtrl.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_ListCtrl.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_ListCtrl.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_ListCtrl.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_ListCtrl.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}