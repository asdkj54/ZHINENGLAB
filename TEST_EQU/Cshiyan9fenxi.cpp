// Cshiyan9fenxi.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan9fenxi.h"
#include "afxdialogex.h"
#include"DataBaseADO.h"

// Cshiyan9fenxi 对话框

IMPLEMENT_DYNAMIC(Cshiyan9fenxi, CDialogEx)

Cshiyan9fenxi::Cshiyan9fenxi(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan9fenxi, pParent)
{

}

Cshiyan9fenxi::~Cshiyan9fenxi()
{
}

void Cshiyan9fenxi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CUSTOM91, m_ChartCtrl91);
}


BEGIN_MESSAGE_MAP(Cshiyan9fenxi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan9fenxi::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cshiyan9fenxi 消息处理程序


BOOL Cshiyan9fenxi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CChartAxis *pAxis = NULL;
	pAxis = m_ChartCtrl91.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl91.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);

	TChartString str1;
	str1 = _T("实验数据趋势");
	m_ChartCtrl91.GetTitle()->AddString(str1);

	m_ChartCtrl91.GetTitle()->SetColor(RGB(255, 255, 255));   //标题字体白色
	m_ChartCtrl91.GetLeftAxis()->SetTextColor(RGB(255, 255, 255));  //左坐标轴白色
	m_ChartCtrl91.GetBottomAxis()->SetTextColor(RGB(255, 255, 255));  //底部坐标轴白色
	m_ChartCtrl91.SetBorderColor(RGB(255, 255, 255));  //边框颜色白色
	m_ChartCtrl91.SetBackColor(RGB(85, 85, 85));  //背景颜色深灰色
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

CString Cshiyan9fenxi::VariantToCString(_variant_t var)
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

void Cshiyan9fenxi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.1.157,1433;Database=text;uid=Lab;pwd=30039621;"))
		return;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("平均击穿电压");


	//查询结果

	UpdateData(TRUE);                       //这个函数的使用请参考数据交换UpdateData，那篇文章  


	CString strSQL; //存放sql语句
	strSQL.Format(_T("select top 10 平均击穿电压 from test9 order by 日期 desc"));
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(strSQL), vName));
	//m_ListCtrl.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	//int sizeR = vResult.size();
	CString y1[10];
	double X1Values[10], Y11Values[10];
	for (int i = 0; i < vResult.size(); ++i)
	{

		X1Values[i] = i;
		y1[i] = VariantToCString(vResult.at(i).at(0));

		Y11Values[i] = _ttoi(y1[i]);
		Y11Values[i] = double(Y11Values[i]);

	}

	//double X1Values[10], Y1Values[10];
	//for (int i = 0; i < 10; ++i)
	//{
	//	X1Values[i] = i;
	//	Y1Values[i] = 2 * i + 12;
	//}
	CChartLineSerie *pLineSerie1;

	m_ChartCtrl91.SetZoomEnabled(true);
	m_ChartCtrl91.RemoveAllSeries();//先清空
	pLineSerie1 = m_ChartCtrl91.CreateLineSerie();
	pLineSerie1->SetSeriesOrdering(poNoOrdering);//设置为无序
	pLineSerie1->SetPoints(X1Values, Y11Values, 10);


	//UpdateData(FALSE);
	m_DataBase.Close();	//记得要关闭连接
}
