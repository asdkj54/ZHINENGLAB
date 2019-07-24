// C.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "C.h"
#include "afxdialogex.h"
#include "DataBaseADO.h"
#include "Resource.h"
// C 对话框

IMPLEMENT_DYNAMIC(C, CDialogEx)

C::C(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_testrecord, pParent)
	, m_text13(_T(""))
	, m_text14(_T(""))
	, m_text15(_T(""))
	, m_text16(_T(""))
	, m_text17(_T(""))
	, m_text18(_T(""))
	, m_text19(_T(""))
	, m_text110(_T(""))

{

}

C::~C()
{
}

void C::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_listtestrecord);
	DDX_Text(pDX, IDC_EDIT5, m_text13);
	DDX_Text(pDX, IDC_EDIT6, m_text14);
	DDX_Text(pDX, IDC_EDIT7, m_text15);
	DDX_Text(pDX, IDC_EDIT8, m_text16);
	DDX_Text(pDX, IDC_EDIT9, m_text17);
	DDX_Text(pDX, IDC_EDIT10, m_text18);
	DDX_Text(pDX, IDC_EDIT11, m_text19);
	DDX_Text(pDX, IDC_EDIT12, m_text110);
	//  DDX_Text(pDX, IDC_EDIT1, m_textsourse);
	DDX_Control(pDX, IDC_COMBO2, m_combox1);
	DDX_Control(pDX, IDC_COMBO3, m_test1combox1);
	//DDX_Control(pDX, IDC_COMBO4, m_test1combox2);
	DDX_Control(pDX, IDC_COMBO5, m_test1combox2);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_test1date);
}

BEGIN_MESSAGE_MAP(C, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &C::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C::OnBnClickedButton3)
END_MESSAGE_MAP()


// C 消息处理程序


BOOL C::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	
	CRect rc;
	m_listtestrecord.GetWindowRect(&rc);	//获取控件大小
	//设置了四列，大小是一样的
	m_listtestrecord.InsertColumn(0, _T("工作台"), LVCFMT_CENTER, rc.Size().cx / 12, 0);
	m_listtestrecord.InsertColumn(1, _T("日期"), LVCFMT_CENTER, rc.Size().cx / 12, 1);
	m_listtestrecord.InsertColumn(2, _T("试验"), LVCFMT_CENTER, rc.Size().cx / 12, 2);
	m_listtestrecord.InsertColumn(3, _T("氢气"), LVCFMT_CENTER, rc.Size().cx / 12, 3);
	m_listtestrecord.InsertColumn(4, _T("甲烷"), LVCFMT_CENTER, rc.Size().cx / 12, 4);
	m_listtestrecord.InsertColumn(5, _T("乙烷"), LVCFMT_CENTER, rc.Size().cx / 12, 5);
	m_listtestrecord.InsertColumn(6, _T("乙烯"), LVCFMT_CENTER, rc.Size().cx / 12, 6);
	m_listtestrecord.InsertColumn(7, _T("乙炔"), LVCFMT_CENTER, rc.Size().cx / 12, 7);
	m_listtestrecord.InsertColumn(8, _T("一氧化碳"), LVCFMT_CENTER, rc.Size().cx / 12, 8);
	m_listtestrecord.InsertColumn(9, _T("二氧化碳"), LVCFMT_CENTER, rc.Size().cx / 12, 9);
	m_listtestrecord.InsertColumn(10, _T("总烃"), LVCFMT_CENTER, rc.Size().cx / 12, 10);
	m_listtestrecord.InsertColumn(11, _T("试验样品来源"), LVCFMT_CENTER, rc.Size().cx / 12, 11);
	//LVS_EX_GRIDLINES是希望显示网格；LVS_EX_FULLROWSELECT是希望被选中时整行反色显示；LVS_EX_HEADERDRAGDROP是让其支持点击表头排序；LVS_EX_TWOCLICKACTIVATE是希望有鼠标在未被选中的行上移动的时候有一些效果
	m_listtestrecord.SetExtendedStyle(m_listtestrecord.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP/* | LVS_EX_TWOCLICKACTIVATE*/);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
CString C::VariantToCString(_variant_t var)
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


void C::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("工作台");
	vName.push_back("日期");
	vName.push_back("试验");
	vName.push_back("氢气");
	vName.push_back("甲烷");
	vName.push_back("乙烷");
	vName.push_back("乙烯");
	vName.push_back("乙烷");
	vName.push_back("一氧化碳");
	vName.push_back("二氧化碳");
	vName.push_back("总烃");
	vName.push_back("试验样品来源");
	//查询结果
	//UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	//int index = m_combox1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	//CString strI;
	//strI.Format(_T("%d"), index);
	//CString strC;
	//m_combox1.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from test1 order by 日期 desc"));
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listtestrecord.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listtestrecord.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listtestrecord.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listtestrecord.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listtestrecord.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listtestrecord.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listtestrecord.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
		m_listtestrecord.SetItemText(i, 6, VariantToCString(vResult.at(i).at(6)));	//设置该行的后面列的内容
		m_listtestrecord.SetItemText(i, 7, VariantToCString(vResult.at(i).at(7)));
		m_listtestrecord.SetItemText(i, 8, VariantToCString(vResult.at(i).at(8)));
		m_listtestrecord.SetItemText(i, 9, VariantToCString(vResult.at(i).at(9)));
		m_listtestrecord.SetItemText(i, 10, VariantToCString(vResult.at(i).at(10)));
		m_listtestrecord.SetItemText(i, 11, VariantToCString(vResult.at(i).at(11)));
	}
	//UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}


void C::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("工作台");
	vName.push_back("日期");
	vName.push_back("试验");
	vName.push_back("氢气");
	vName.push_back("甲烷");
	vName.push_back("乙烷");
	vName.push_back("乙烯");
	vName.push_back("乙烷");
	vName.push_back("一氧化碳");
	vName.push_back("二氧化碳");
	vName.push_back("总烃");
	vName.push_back("试验样品来源");
	//查询结果
	
	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_combox1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_combox1.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString sqlorder;
	sqlorder = strC;
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from test1 where 试验样品来源 = '%s' order by 日期 desc"),sqlorder);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listtestrecord.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listtestrecord.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listtestrecord.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listtestrecord.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listtestrecord.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listtestrecord.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listtestrecord.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
		m_listtestrecord.SetItemText(i, 6, VariantToCString(vResult.at(i).at(6)));	//设置该行的后面列的内容
		m_listtestrecord.SetItemText(i, 7, VariantToCString(vResult.at(i).at(7)));
		m_listtestrecord.SetItemText(i, 8, VariantToCString(vResult.at(i).at(8)));
		m_listtestrecord.SetItemText(i, 9, VariantToCString(vResult.at(i).at(9)));
		m_listtestrecord.SetItemText(i, 10, VariantToCString(vResult.at(i).at(10)));
		m_listtestrecord.SetItemText(i, 11, VariantToCString(vResult.at(i).at(11)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接

}


void C::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("工作台");
	vName.push_back("日期");
	vName.push_back("试验");
	vName.push_back("氢气");
	vName.push_back("甲烷");
	vName.push_back("乙烷");
	vName.push_back("乙烯");
	vName.push_back("乙烷");
	vName.push_back("一氧化碳");
	vName.push_back("二氧化碳");
	vName.push_back("总烃");
	vName.push_back("试验样品来源");


	CString strSQL; //存放sql语句

	UpdateData(TRUE);
	CString m_text1name;
	m_text1name.Format(_T("绝缘油实验室色谱分析试验"));

	int index1 = m_test1combox1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI1;
	strI1.Format(_T("%d"), index1);
	CString strC1;
	m_test1combox1.GetLBText(index1, strC1);

	int index2 = m_test1combox2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI2;
	strI2.Format(_T("%d"), index2);
	CString strC2;
	m_test1combox2.GetLBText(index2, strC2);


	CTime dtm2;

	dtm2 = CTime::GetCurrentTime();
	CString dtime2 = dtm2.Format(_T("%Y-%m-%d %H:%M:%S"));

	strSQL.Format(_T("insert into test1 values( '%s','%s', '%s', '%s', '%s', '%s','%s','%s','%s', '%s', '%s', '%s')"), strC1, dtime2, m_text1name, m_text13, m_text14, m_text15, m_text16, m_text17, m_text18, m_text19, m_text110, strC2);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listtestrecord.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listtestrecord.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listtestrecord.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listtestrecord.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listtestrecord.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listtestrecord.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listtestrecord.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
		m_listtestrecord.SetItemText(i, 6, VariantToCString(vResult.at(i).at(6)));	//设置该行的后面列的内容
		m_listtestrecord.SetItemText(i, 7, VariantToCString(vResult.at(i).at(7)));
		m_listtestrecord.SetItemText(i, 8, VariantToCString(vResult.at(i).at(8)));
		m_listtestrecord.SetItemText(i, 9, VariantToCString(vResult.at(i).at(9)));
		m_listtestrecord.SetItemText(i, 10, VariantToCString(vResult.at(i).at(10)));
		m_listtestrecord.SetItemText(i, 11, VariantToCString(vResult.at(i).at(11)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
