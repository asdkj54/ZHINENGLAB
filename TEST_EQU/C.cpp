// C.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "C.h"
#include "afxdialogex.h"
#include "DataBaseADO.h"

// C 对话框

IMPLEMENT_DYNAMIC(C, CDialogEx)

C::C(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_testrecord, pParent)
	, m_text10(_T(""))
	, m_text11(_T(""))
	, m_text12(_T(""))
	, m_text13(_T(""))
	, m_text14(_T(""))
	, m_text15(_T(""))
	, m_text16(_T(""))
	, m_text17(_T(""))
	, m_text18(_T(""))
	, m_text19(_T(""))
	, m_text110(_T(""))
	, m_text111(_T(""))
	, m_textsourse(_T(""))
{

}

C::~C()
{
}

void C::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_listtestrecord);
	DDX_Text(pDX, IDC_EDIT14, m_text10);
	DDX_Text(pDX, IDC_EDIT2, m_text11);
	DDX_Text(pDX, IDC_EDIT4, m_text12);
	DDX_Text(pDX, IDC_EDIT5, m_text13);
	DDX_Text(pDX, IDC_EDIT6, m_text14);
	DDX_Text(pDX, IDC_EDIT7, m_text15);
	DDX_Text(pDX, IDC_EDIT8, m_text16);
	DDX_Text(pDX, IDC_EDIT9, m_text17);
	DDX_Text(pDX, IDC_EDIT10, m_text18);
	DDX_Text(pDX, IDC_EDIT11, m_text19);
	DDX_Text(pDX, IDC_EDIT12, m_text110);
	DDX_Text(pDX, IDC_EDIT3, m_text111);
	DDX_Text(pDX, IDC_EDIT1, m_textsourse);
	DDX_Control(pDX, IDC_COMBO2, m_combox1);
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
	/*CString str[] = { TEXT("工作台"),TEXT("日期"),TEXT("氢气"),TEXT("甲烷"),TEXT("乙烷"),TEXT("乙烯"),TEXT("乙炔"),TEXT("一氧化碳"),TEXT("二氧化碳"),TEXT("总烃") };
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
*/
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
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
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
	strSQL.Format(_T("select * from test1 order by 日期"));
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
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
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
	strSQL.Format(_T("select * from test1 where 试验样品来源 = '%s'"),sqlorder);
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
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
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

	strSQL.Format(_T("insert into test1 values( '%s','%s', '%s', '%s', '%s', '%s','%s','%s','%s', '%s', '%s', '%s')"), m_text10, m_text11, m_text12, m_text13, m_text14, m_text15, m_text16, m_text17, m_text18, m_text19, m_text110, m_text111);
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
