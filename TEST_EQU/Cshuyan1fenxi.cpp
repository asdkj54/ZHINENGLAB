// Cshuyan1fenxi.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "afxdialogex.h"
#include "DataBaseADO.h"
#include "Cshuyan1fenxi.h"
// Cshuyan1fenxi 对话框

IMPLEMENT_DYNAMIC(Cshuyan1fenxi, CDialogEx)

Cshuyan1fenxi::Cshuyan1fenxi(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan1fenxi, pParent)
{

}

Cshuyan1fenxi::~Cshuyan1fenxi()
{
}

void Cshuyan1fenxi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_CUSTOM11, m_ChartCtrl11);
	DDX_Control(pDX, IDC_CUSTOM12, m_ChartCtrl12);
	DDX_Control(pDX, IDC_CUSTOM13, m_ChartCtrl13);
	DDX_Control(pDX, IDC_CUSTOM14, m_ChartCtrl14);
	DDX_Control(pDX, IDC_CUSTOM15, m_ChartCtrl15);
	DDX_Control(pDX, IDC_CUSTOM16, m_ChartCtrl16);
	DDX_Control(pDX, IDC_CUSTOM17, m_ChartCtrl17);
	DDX_Control(pDX, IDC_CUSTOM18, m_ChartCtrl18);
	
}


BEGIN_MESSAGE_MAP(Cshuyan1fenxi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &Cshuyan1fenxi::OnBnClickedButton2)
END_MESSAGE_MAP()


// Cshuyan1fenxi 消息处理程序


BOOL Cshuyan1fenxi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CChartAxis *pAxis = NULL;
	pAxis = m_ChartCtrl11.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl11.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl12.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl12.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl13.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl13.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl14.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl14.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl15.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl15.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl16.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl16.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl17.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl17.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl18.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl18.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	//***********添加标题
	TChartString str1;
	TChartString str2;
	TChartString str3;
	TChartString str4;
	TChartString str5;
	TChartString str6;
	TChartString str7;
	TChartString str8;

	str1 = _T("氢气");
	str2 = _T("甲烷");
	m_ChartCtrl11.GetTitle()->AddString(str1);
	m_ChartCtrl12.GetTitle()->AddString(str2);
	str3 = _T("乙烷");
	str4 = _T("乙烯");
	m_ChartCtrl13.GetTitle()->AddString(str3);
	m_ChartCtrl14.GetTitle()->AddString(str4);
	str5 = _T("乙炔");
	str6 = _T("一氧化碳");
	m_ChartCtrl15.GetTitle()->AddString(str5);
	m_ChartCtrl16.GetTitle()->AddString(str6);
	str7 = _T("二氧化碳");
	str8 = _T("总烃");
	m_ChartCtrl17.GetTitle()->AddString(str7);
	m_ChartCtrl18.GetTitle()->AddString(str8);
	//************绘图背景

	m_ChartCtrl11.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl11.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl11.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl11.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl11.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl12.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl12.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl12.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl12.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl12.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl13.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl13.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl13.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl13.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl13.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl14.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl14.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl14.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl14.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl14.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl15.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl15.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl15.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl15.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl15.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl16.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl16.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl16.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl16.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl16.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl17.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl17.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl17.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl17.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl17.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色

	m_ChartCtrl18.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl18.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl18.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl18.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl18.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Cshuyan1fenxi::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.43.107,1433;Database=text;uid=30039;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("氢气");
	vName.push_back("甲烷");
	vName.push_back("乙烷");
	vName.push_back("乙烯");
	vName.push_back("乙炔");
	vName.push_back("一氧化碳");
	vName.push_back("二氧化碳");
	vName.push_back("总烃");

	//查询结果

	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  


	CString strSQL; //存放sql语句
	strSQL.Format(_T("select top 10 氢气,甲烷,乙烷,乙烯,乙炔,一氧化碳,二氧化碳,总烃 from test1 order by 日期 desc"));
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	//m_ListCtrl.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	//int sizeR = vResult.size();
	CString y1[10], y2[10],y3[10],y4[10],y5[10],y6[10],y7[10],y8[10];
	double X1Values[10], Y11Values[10], Y12Values[10], Y13Values[10], Y14Values[10], Y15Values[10], Y16Values[10], Y17Values[10], Y18Values[10];
	for (int i = 0; i < vResult.size(); ++i)
	{

		X1Values[i] = i;
		y1[i] = VariantToCString(vResult.at(i).at(0));
		y2[i] = VariantToCString(vResult.at(i).at(1));
		y3[i] = VariantToCString(vResult.at(i).at(2));
		y4[i] = VariantToCString(vResult.at(i).at(3));
		y5[i] = VariantToCString(vResult.at(i).at(4));
		y6[i] = VariantToCString(vResult.at(i).at(5));
		y7[i] = VariantToCString(vResult.at(i).at(6));
		y8[i] = VariantToCString(vResult.at(i).at(7));

		Y11Values[i] = _ttoi(y1[i]);
		Y11Values[i] = double(Y11Values[i]);
		Y12Values[i] = _ttoi(y2[i]);
		Y12Values[i] = double(Y12Values[i]);
		Y13Values[i] = _ttoi(y3[i]);
		Y13Values[i] = double(Y13Values[i]);
		Y14Values[i] = _ttoi(y4[i]);
		Y14Values[i] = double(Y14Values[i]);
		Y15Values[i] = _ttoi(y5[i]);
		Y15Values[i] = double(Y15Values[i]);
		Y16Values[i] = _ttoi(y6[i]);
		Y16Values[i] = double(Y16Values[i]);
		Y17Values[i] = _ttoi(y7[i]);
		Y17Values[i] = double(Y17Values[i]);
		Y18Values[i] = _ttoi(y8[i]);
		Y18Values[i] = double(Y18Values[i]);
	}

	//double X1Values[10], Y1Values[10];
	//for (int i = 0; i < 10; ++i)
	//{
	//	X1Values[i] = i;
	//	Y1Values[i] = 2 * i + 12;
	//}
	CChartLineSerie *pLineSerie1;

	m_ChartCtrl11.SetZoomEnabled(true);
	m_ChartCtrl11.RemoveAllSeries();//先清空
	pLineSerie1 = m_ChartCtrl11.CreateLineSerie();
	pLineSerie1->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie1->SetPoints(X1Values, Y11Values, 10);

	CChartLineSerie *pLineSerie2;

	m_ChartCtrl12.SetZoomEnabled(true);
	m_ChartCtrl12.RemoveAllSeries();//先清空
	pLineSerie2 = m_ChartCtrl12.CreateLineSerie();
	pLineSerie2->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie2->SetPoints(X1Values, Y12Values, 10);

	CChartLineSerie *pLineSerie3;

	m_ChartCtrl13.SetZoomEnabled(true);
	m_ChartCtrl13.RemoveAllSeries();//先清空
	pLineSerie3 = m_ChartCtrl13.CreateLineSerie();
	pLineSerie3->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie3->SetPoints(X1Values, Y13Values, 10);

	CChartLineSerie *pLineSerie4;

	m_ChartCtrl14.SetZoomEnabled(true);
	m_ChartCtrl14.RemoveAllSeries();//先清空
	pLineSerie4 = m_ChartCtrl14.CreateLineSerie();
	pLineSerie4->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie4->SetPoints(X1Values, Y14Values, 10);

	CChartLineSerie *pLineSerie5;

	m_ChartCtrl15.SetZoomEnabled(true);
	m_ChartCtrl15.RemoveAllSeries();//先清空
	pLineSerie5 = m_ChartCtrl15.CreateLineSerie();
	pLineSerie5->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie5->SetPoints(X1Values, Y15Values, 10);

	CChartLineSerie *pLineSerie6;

	m_ChartCtrl16.SetZoomEnabled(true);
	m_ChartCtrl16.RemoveAllSeries();//先清空
	pLineSerie6 = m_ChartCtrl16.CreateLineSerie();
	pLineSerie6->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie6->SetPoints(X1Values, Y16Values, 10);

	CChartLineSerie *pLineSerie8;

	m_ChartCtrl18.SetZoomEnabled(true);
	m_ChartCtrl18.RemoveAllSeries();//先清空
	pLineSerie8 = m_ChartCtrl18.CreateLineSerie();
	pLineSerie8->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie8->SetPoints(X1Values, Y18Values, 10);

	CChartLineSerie *pLineSerie7;

	m_ChartCtrl17.SetZoomEnabled(true);
	m_ChartCtrl17.RemoveAllSeries();//先清空
	pLineSerie7 = m_ChartCtrl17.CreateLineSerie();
	pLineSerie7->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie7->SetPoints(X1Values, Y17Values, 10);

	//UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
//void CMFCDataBaseDlg::OnBnClickedButton2()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.43.107,1433;Database=text;uid=30039;pwd=30039621;"))
//		return;
//	vector<_variant_t> vName;	//设置要返回的列名
//	vName.push_back("stu_num");
//
//	//查询结果
//
//	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  
//
//	CString sqlorder;
//
//	CString strSQL; //存放sql语句
//	strSQL.Format(_T("select stu_num from student where stu_name = 'sdadsd'"));
//	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
//	m_ListCtrl.DeleteAllItems();	//删除所有的项目
//	//通过循环添加所有的内容
//	int sizeR = vResult.size();
//	CString y[10];
//	double X1Values[10], Y1Values[10];
//	for (int i = 0; i < vResult.size(); ++i)
//	{
//		m_ListCtrl.InsertItem(i, VariantToCString(vResult.at(i).at(0)));
//		if (i < 10)
//		{
//			X1Values[i] = i;
//			y[i] = VariantToCString(vResult.at(i).at(0));
//			Y1Values[i] = _ttoi(y[i]);
//			Y1Values[i] = double(Y1Values[i]);
//		}
//
//		//m_edit1 = VariantToCString(vResult.at(i).at(0));
//		//插入一行，每行的第一列是序号
//		//m_ListCtrl.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
//		//m_ListCtrl.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
//		//m_ListCtrl.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
//
//	}
//
//	CChartLineSerie *pLineSerie2;
//
//	m_ChartCtrl1.SetZoomEnabled(true);
//	m_ChartCtrl1.RemoveAllSeries();//先清空
//	pLineSerie2 = m_ChartCtrl1.CreateLineSerie();
//	pLineSerie2->SetSeriesOrdering(poNoOrdering);//设置为无序
//	pLineSerie2->SetPoints(X1Values, Y1Values, 10);
//
//	UpdateData(FALSE);
//	m_DataBase.Close();	//记得要关闭连接
//}

CString Cshuyan1fenxi::VariantToCString(_variant_t var)
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