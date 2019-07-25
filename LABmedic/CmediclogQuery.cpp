// CmediclogQuery.cpp: 实现文件
//

#include "stdafx.h"
#include "LABmedic.h"
#include "CmediclogQuery.h"
#include "afxdialogex.h"
#include"DataBaseADO.h"

// CmediclogQuery 对话框

IMPLEMENT_DYNAMIC(CmediclogQuery, CDialogEx)

CmediclogQuery::CmediclogQuery(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_mediclogQuery, pParent)
	, m_mededit1(_T(""))
{

}

CmediclogQuery::~CmediclogQuery()
{
}

void CmediclogQuery::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listQuery);
	DDX_Control(pDX, IDC_COMBO2, m_comboxm1);
	DDX_Control(pDX, IDC_COMBO3, m_comboxm2);
	DDX_Control(pDX, IDC_COMBO4, m_comboxm3);
	DDX_Control(pDX, IDC_COMBO1, m_medcombox1);
	DDX_Control(pDX, IDC_COMBO5, m_medcombox2);
	DDX_Control(pDX, IDC_COMBO6, m_medcombox3);
	DDX_Text(pDX, IDC_EDIT6, m_mededit1);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_meddate1);
	DDX_Control(pDX, IDC_DATETIMEPICKER2, m_meddate2);
}


BEGIN_MESSAGE_MAP(CmediclogQuery, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CmediclogQuery::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CmediclogQuery::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CmediclogQuery::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CmediclogQuery::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CmediclogQuery::OnBnClickedButton5)
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
	CRect rc;
	m_listQuery.GetWindowRect(&rc);	//获取控件大小

	//设置了四列，大小是一样的
	m_listQuery.InsertColumn(0, _T("日期"), LVCFMT_CENTER, rc.Size().cx / 6, 0);
	m_listQuery.InsertColumn(1, _T("人员"), LVCFMT_CENTER, rc.Size().cx / 6, 1);
	m_listQuery.InsertColumn(2, _T("药品"), LVCFMT_CENTER, rc.Size().cx / 6, 2);
	m_listQuery.InsertColumn(3, _T("领用时间"), LVCFMT_CENTER, rc.Size().cx / 6, 3);
	m_listQuery.InsertColumn(4, _T("药品用途"), LVCFMT_CENTER, rc.Size().cx / 6, 4);
	m_listQuery.InsertColumn(5, _T("药品用量"), LVCFMT_CENTER, rc.Size().cx / 6, 5);
	//LVS_EX_GRIDLINES是希望显示网格；LVS_EX_FULLROWSELECT是希望被选中时整行反色显示；LVS_EX_HEADERDRAGDROP是让其支持点击表头排序；LVS_EX_TWOCLICKACTIVATE是希望有鼠标在未被选中的行上移动的时候有一些效果
	m_listQuery.SetExtendedStyle(m_listQuery.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP/* | LVS_EX_TWOCLICKACTIVATE*/);
	
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CmediclogQuery::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//dlg.ShowWindow(SW_SHOWNORMAL);
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("日期");
	vName.push_back("人员");
	vName.push_back("药品");
	vName.push_back("领用时间");
	vName.push_back("药品用途");
	vName.push_back("药品用量");

	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(L"select * from LABmedic order by 领用时间 desc"), vName));
	
	m_listQuery.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listQuery.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listQuery.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listQuery.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listQuery.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listQuery.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listQuery.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接

}


void CmediclogQuery::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//dlg1.ShowWindow(SW_SHOWNORMAL);
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("日期");
	vName.push_back("人员");
	vName.push_back("药品");
	vName.push_back("领用时间");
	vName.push_back("药品用途");
	vName.push_back("药品用量");
	//查询结果
	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_comboxm1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_comboxm1.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from LABmedic where 药品 = '%s' order by 领用时间 desc"), strC);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listQuery.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listQuery.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listQuery.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listQuery.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listQuery.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listQuery.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listQuery.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}


void CmediclogQuery::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//dlg2.ShowWindow(SW_SHOWNORMAL);
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("日期");
	vName.push_back("人员");
	vName.push_back("药品");
	vName.push_back("领用时间");
	vName.push_back("药品用途");
	vName.push_back("药品用量");
	//查询结果
	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_comboxm2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_comboxm2.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from LABmedic where 人员 = '%s' order by 领用时间 desc"), strC);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listQuery.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listQuery.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listQuery.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listQuery.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listQuery.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listQuery.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listQuery.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}


void CmediclogQuery::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	//dlg3.ShowWindow(SW_SHOWNORMAL);
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("日期");
	vName.push_back("人员");
	vName.push_back("药品");
	vName.push_back("领用时间");
	vName.push_back("药品用途");
	vName.push_back("药品用量");
	//查询结果
	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_comboxm3.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_comboxm3.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from LABmedic where 药品用途 = '%s' order by 领用时间 desc"), strC);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listQuery.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listQuery.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listQuery.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listQuery.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listQuery.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listQuery.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listQuery.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
CString CmediclogQuery::VariantToCString(_variant_t var)
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

void CmediclogQuery::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("日期");
	vName.push_back("人员");
	vName.push_back("药品");
	vName.push_back("领用时间");
	vName.push_back("药品用途");
	vName.push_back("药品用量");
	//查询结果
	CString sqlcode1;
	CString strSQL; //存放sql语句

	UpdateData(TRUE);



	int index1 = m_medcombox1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI1;
	strI1.Format(_T("%d"), index1);
	CString strC1;
	m_medcombox1.GetLBText(index1, strC1);

	int index2 = m_medcombox2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI2;
	strI2.Format(_T("%d"), index2);
	CString strC2;
	m_medcombox2.GetLBText(index2, strC2);

	int index3 = m_medcombox3.GetCurSel();     
	CString strI3;
	strI3.Format(_T("%d"), index3);
	CString strC3;
	m_medcombox3.GetLBText(index3, strC3);


	CTime dtm2, dtm1;

	((CDateTimeCtrl*)GetDlgItem(IDC_DATETIMEPICKER1))->GetTime(dtm1);
	CString dtime1 = dtm1.Format(_T("%Y-%m-%d"));

	dtm2 = CTime::GetCurrentTime();
	CString dtime2 = dtm2.Format(_T("%Y-%m-%d %H:%M:%S"));





	strSQL.Format(_T("insert into LABmedic values( '%s', '%s', '%s', '%s', '%s', '%s')"),dtime1, strC1, strC2,dtime2,strC3,m_mededit1);


	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listQuery.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listQuery.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listQuery.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listQuery.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listQuery.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listQuery.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listQuery.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
