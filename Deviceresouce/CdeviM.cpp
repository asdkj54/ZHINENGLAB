// CdeviM.cpp: 实现文件
//

#include "stdafx.h"
#include "Deviceresouce.h"
#include "CdeviM.h"
#include "afxdialogex.h"

#include "afxcmn.h"
#include "DataBaseADO.h"
#include "afxdialogex.h"
#include<iostream>  
#include<stdio.h>  
#include <string>
// CdeviM 对话框

IMPLEMENT_DYNAMIC(CdeviM, CDialogEx)

CdeviM::CdeviM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_deviM, pParent)
{

}

CdeviM::~CdeviM()
{
}

void CdeviM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listdev);

}


BEGIN_MESSAGE_MAP(CdeviM, CDialogEx)

END_MESSAGE_MAP()


// CdeviM 消息处理程序


BOOL CdeviM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	
	if (!m_DataBase.Open("Provider=SQLOLEDB;Server=192.168.43.107,1433;Database=text;uid=30039;pwd=30039621;"))
		return FALSE;
	vector<_variant_t> vName;	//设置要返回的列名
	vName.push_back("stu_id");
	vName.push_back("stu_num");
	vName.push_back("stu_name");
	vName.push_back("stu_class");
	//查询结果
	vector<vector<_variant_t>> vResult(m_DataBase.Select(::SysAllocString(L"select * from student"), vName));
	m_listdev.DeleteAllItems();	//删除所有的项目
	//通过循环添加所有的内容
	for (int i = 0; i < vResult.size(); ++i)
	{
		m_listdev.InsertItem(i, VariantToCString(vResult.at(i).at(0)));		//插入一行，每行的第一列是序号
		m_listdev.SetItemText(i, 1, VariantToCString(vResult.at(i).at(1)));	//设置该行的后面列的内容
		m_listdev.SetItemText(i, 2, VariantToCString(vResult.at(i).at(2)));
		m_listdev.SetItemText(i, 3, VariantToCString(vResult.at(i).at(3)));
	}
	m_DataBase.Close();	//记得要关闭连接

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


CString CdeviM::VariantToCString(_variant_t var)
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
