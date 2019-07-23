// CresourceMs.cpp: 实现文件
//

#include "stdafx.h"
#include "Deviceresouce.h"
#include "CresourceMs.h"
#include "afxdialogex.h"
#include"DataBaseADO.h"

// CresourceMs 对话框

IMPLEMENT_DYNAMIC(CresourceMs, CDialogEx)

CresourceMs::CresourceMs(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_resourceMs, pParent)

	, m_redit1(_T(""))
	, m_redit3(_T(""))
{

}

CresourceMs::~CresourceMs()
{
}

void CresourceMs::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listresM);
	DDX_Control(pDX, IDC_COMBO1, m_combox2);


	DDX_Control(pDX, IDC_COMBO2, m_rcombox1);
	DDX_Control(pDX, IDC_COMBO6, m_rcombox2);
	DDX_Control(pDX, IDC_COMBO7, m_rcombox3);
	DDX_Control(pDX, IDC_COMBO8, m_rcombox4);
	DDX_Text(pDX, IDC_EDIT1, m_redit1);
	DDX_Text(pDX, IDC_EDIT3, m_redit3);
	DDX_Control(pDX, IDC_DATETIMEPICKER2, m_rdate1);
}


BEGIN_MESSAGE_MAP(CresourceMs, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CresourceMs::OnBnClickedButton1)
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON2, &CresourceMs::OnBnClickedButton2)

END_MESSAGE_MAP()


// CresourceMs 消息处理程序


BOOL CresourceMs::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	// TODO: 在此添加额外的初始化代码
	dlg.Create(IDD_resoM);
	CRect rc;
	m_listresM.GetWindowRect(&rc);	//获取控件大小
	//设置了四列，大小是一样的
	m_listresM.InsertColumn(0, _T("物资"), LVCFMT_CENTER, rc.Size().cx / 6, 0);
	m_listresM.InsertColumn(1, _T("工作台"), LVCFMT_CENTER, rc.Size().cx / 6, 1);
	m_listresM.InsertColumn(2, _T("物资存量"), LVCFMT_CENTER, rc.Size().cx / 6, 2);
	m_listresM.InsertColumn(3, _T("使用人员"), LVCFMT_CENTER, rc.Size().cx / 6, 3);
	m_listresM.InsertColumn(4, _T("最近使用日期"), LVCFMT_CENTER, rc.Size().cx / 6, 4);
	m_listresM.InsertColumn(5, _T("用途/用量"), LVCFMT_CENTER, rc.Size().cx / 6, 5);
	//LVS_EX_GRIDLINES是希望显示网格；LVS_EX_FULLROWSELECT是希望被选中时整行反色显示；LVS_EX_HEADERDRAGDROP是让其支持点击表头排序；LVS_EX_TWOCLICKACTIVATE是希望有鼠标在未被选中的行上移动的时候有一些效果
	m_listresM.SetExtendedStyle(m_listresM.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP/* | LVS_EX_TWOCLICKACTIVATE*/);
	return TRUE;  // return TRUE unless you set the focus to a control

}


void CresourceMs::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//dlg.ShowWindow(SW_SHOWNORMAL);

	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.43.107,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("物资");
	vName.push_back("工作台");
	vName.push_back("物资存量");
	vName.push_back("使用人员");
	vName.push_back("最近使用日期");
	vName.push_back("用途/用量");
	//查询结果
	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
	int index = m_combox2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI;
	strI.Format(_T("%d"), index);
	CString strC;
	m_combox2.GetLBText(index, strC);        //根据行号，这个可以得到那行的字符串  
	CString strSQL; //存放sql语句
	strSQL.Format(_T("select * from resMs where 物资 = '%s' order by 最近使用日期 desc"), strC);
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listresM.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listresM.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listresM.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listresM.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listresM.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listresM.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listresM.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接

}


void CresourceMs::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CRect   rect;
	GetClientRect(&rect);    //获取对话框长宽      
	CDC   dcBmp;             //定义并创建一个内存设备环境
	dcBmp.CreateCompatibleDC(&dc);             //创建兼容性DC
	CBitmap   bmpBackground;
	bmpBackground.LoadBitmap(IDB_BITMAP1);    //载入资源中图片
	BITMAP   m_bitmap;                         //图片变量               
	bmpBackground.GetBitmap(&m_bitmap);       //将图片载入位图中
	//将位图选入临时内存设备环境
	CBitmap  *pbmpOld = dcBmp.SelectObject(&bmpBackground);
	//调用函数显示图片StretchBlt显示形状可变
	dc.SetStretchBltMode(HALFTONE);             //***********添加于此,背景失真
	dc.StretchBlt(0, 0, rect.Width(), rect.Height(), &dcBmp, 0, 0, m_bitmap.bmWidth, m_bitmap.bmHeight, SRCCOPY);
}
//HBRUSH CresourceMs::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
//{
//	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);
//
//	// TODO:  在此更改 DC 的任何特性
//	static CBrush gBr;
//	static bool isInited = false;
//	if (!isInited)
//	{
//		CBitmap bitmap;
//		bitmap.LoadBitmap(IDB_BITMAP1);
//		gBr.CreatePatternBrush(&bitmap);
//		COLORREF clearColor = -1;
//		bitmap.DeleteObject();
//		isInited = true;
//	}
//	if (pWnd == this)
//	{
//		pDC->SetBkMode(TRANSPARENT);
//		return gBr; //主窗口背景使用这个背景刷
//	}
//	else
//	{
//		pDC->SetBkMode(TRANSPARENT);
//		return   (HBRUSH)::GetStockObject(NULL_BRUSH); //其他控件使用透明背景
//	}
//
//
//	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
//	return hbr;
//
//}



void CresourceMs::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.43.107,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("物资");
	vName.push_back("工作台");
	vName.push_back("物资存量");
	vName.push_back("使用人员");
	vName.push_back("最近使用日期");
	vName.push_back("用途/用量");
	//查询结果
	CString sqlcode1;
	CString strSQL; //存放sql语句

	UpdateData(TRUE);





	int index1 = m_rcombox1.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI1;
	strI1.Format(_T("%d"), index1);
	CString strC1;
	m_rcombox1.GetLBText(index1, strC1);

	int index2 = m_rcombox2.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI2;
	strI2.Format(_T("%d"), index2);
	CString strC2;
	m_rcombox2.GetLBText(index2, strC2);

	int index3 = m_rcombox3.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI3;
	strI3.Format(_T("%d"), index3);
	CString strC3;
	m_rcombox3.GetLBText(index3, strC3);

	int index4 = m_rcombox4.GetCurSel();       //这个函数用于得到用户选择的是下拉列表中的第几行，第一行的话，返回0，依次类推  
	CString strI4;
	strI4.Format(_T("%d"), index4);
	CString strC4;
	m_rcombox4.GetLBText(index4, strC4);

	CTime dtm2;

	((CDateTimeCtrl*)GetDlgItem(IDC_DATETIMEPICKER2))->GetTime(dtm2);
	CString dtime2 = dtm2.Format(_T("%Y-%m-%d"));






	strSQL.Format(_T("insert into resMs values( '%s', '%s', '%s', '%s', '%s', '%s')"), strC1, strC2, m_redit1,strC3,dtime2,strC4,m_redit3);


	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	m_listresM.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listresM.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listresM.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listresM.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listresM.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
		m_listresM.SetItemText(i, 4, VariantToCString(vResult.at(i).at(4)));
		m_listresM.SetItemText(i, 5, VariantToCString(vResult.at(i).at(5)));
	}
	UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接

}



CString  CresourceMs::VariantToCString(_variant_t var)
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
