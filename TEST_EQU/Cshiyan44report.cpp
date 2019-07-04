// Cshiyan44report.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan44report.h"
#include "afxdialogex.h"
#include "DataBaseADO.h"

// Cshiyan44report 对话框

IMPLEMENT_DYNAMIC(Cshiyan44report, CDialogEx)

Cshiyan44report::Cshiyan44report(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan4report, pParent)
	, m_edits41(_T(""))
	, m_edits43(_T(""))
	, m_edits42(_T(""))
	, m_edits44(_T(""))
	, m_edits45(_T(""))
{

}

Cshiyan44report::~Cshiyan44report()
{
}

void Cshiyan44report::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listshiyan4);
	DDX_Control(pDX, IDC_COMBO2, m_comboxs4);
	DDX_Text(pDX, IDC_EDIT14, m_edits41);
	DDX_Text(pDX, IDC_EDIT4, m_edits43);
	DDX_Text(pDX, IDC_EDIT2, m_edits42);
	DDX_Text(pDX, IDC_EDIT5, m_edits44);
	DDX_Text(pDX, IDC_EDIT6, m_edits45);
}


BEGIN_MESSAGE_MAP(Cshiyan44report, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan44report::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cshiyan44report::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cshiyan44report::OnBnClickedButton3)
END_MESSAGE_MAP()


// Cshiyan44report 消息处理程序


void Cshiyan44report::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("工作台");
	vName.push_back("日期");
	vName.push_back("试验");
	vName.push_back("试验结果");
	vName.push_back("试验样品来源");

	//查询结果
	//UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	//int index = m_combox1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	//CString strI;
	//strI.Format(_T("%d"), index);
	//CString strC;
	//m_combox1.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from test4 order by 日期 desc"));
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listshiyan4.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listshiyan4.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listshiyan4.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listshiyan4.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listshiyan4.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listshiyan4.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		//m_listshiyan4.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));

	}
	//UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
CString Cshiyan44report::VariantToCString(_variant_t var)
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


BOOL Cshiyan44report::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	CRect rc;
	m_listshiyan4.GetWindowRect(&rc);	//获取控件大小
	//设置了四列，大小是一样的
	m_listshiyan4.InsertColumn(0, _T("工作台"), LVCFMT_CENTER, rc.Size().cx / 5, 0);
	m_listshiyan4.InsertColumn(1, _T("日期"), LVCFMT_CENTER, rc.Size().cx / 5, 1);
	m_listshiyan4.InsertColumn(2, _T("试验"), LVCFMT_CENTER, rc.Size().cx / 5, 2);
	m_listshiyan4.InsertColumn(3, _T("试验结果"), LVCFMT_CENTER, rc.Size().cx / 5, 3);
	m_listshiyan4.InsertColumn(4, _T("试验样品来源"), LVCFMT_CENTER, rc.Size().cx / 5, 4);

	//LVS_EX_GRIDLINES是希望显示网格；LVS_EX_FULLROWSELECT是希望被选中时整行反色显示；LVS_EX_HEADERDRAGDROP是让其支持点击表头排序；LVS_EX_TWOCLICKACTIVATE是希望有鼠标在未被选中的行上移动的时候有一些效果
	m_listshiyan4.SetExtendedStyle(m_listshiyan4.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP/* | LVS_EX_TWOCLICKACTIVATE*/);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE

}


void Cshiyan44report::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("工作台");
	vName.push_back("日期");
	vName.push_back("试验");
	vName.push_back("试验结果");
	vName.push_back("试验样品来源");
	//查询结果

	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_comboxs4.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_comboxs4.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString sqlorder;
	sqlorder = strC;
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from test4 where 试验样品来源 = '%s' order by 日期 desc"), sqlorder);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listshiyan4.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listshiyan4.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listshiyan4.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listshiyan4.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listshiyan4.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listshiyan4.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		//m_listshiyan4.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));

	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}


void Cshiyan44report::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=172.20.38.139,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("工作台");
	vName.push_back("日期");
	vName.push_back("试验");
	vName.push_back("试验结果");
	vName.push_back("试验样品来源");


	CString strSQL; //存放sql语句

	UpdateData(TRUE);

	strSQL.Format(_T("insert into test4 values( '%s','%s', '%s', '%s', '%s')"), m_edits41, m_edits42, m_edits43, m_edits44, m_edits45);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listshiyan4.DeleteAllItems();	//删除所有的项目;
//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listshiyan4.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listshiyan4.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listshiyan4.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listshiyan4.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listshiyan4.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		//m_listshiyan4.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));

	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
