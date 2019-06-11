// Cshiyan2creatreport.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan2creatreport.h"
#include "afxdialogex.h"


// Cshiyan2creatreport 对话框

IMPLEMENT_DYNAMIC(Cshiyan2creatreport, CDialogEx)

Cshiyan2creatreport::Cshiyan2creatreport(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan2, pParent)
{

}

Cshiyan2creatreport::~Cshiyan2creatreport()
{
}

void Cshiyan2creatreport::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cshiyan2creatreport, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan2creatreport::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &Cshiyan2creatreport::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &Cshiyan2creatreport::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &Cshiyan2creatreport::OnBnClickedButton4)
END_MESSAGE_MAP()


// Cshiyan2creatreport 消息处理程序


void Cshiyan2creatreport::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(TEXT("试验报表生成！"));

}


void Cshiyan2creatreport::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Cshiyan2creatreport::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Cshiyan2creatreport::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	OnBnClickedopenGetFile();
}
void Cshiyan2creatreport::OnBnClickedopenGetFile()
{
	// 设置过滤器   
	TCHAR szFilter[] = _T("*.docx)|*.docx||");
	// 构造打开文件对话框   
	CFileDialog fileDlg(TRUE, _T("docx"), NULL, 0, szFilter, this);
	CString strFilePath;
	// 显示打开文件对话框   
	if (IDOK == fileDlg.DoModal())

	{
		// 得到我们的选择文件的地址，用于之后的打开文件的操作
		strFilePath = fileDlg.GetPathName();
		//添加读取这个文件内容的代码，CFile::modeRead是说以只读文件的模式打开
		CStdioFile file;
		file.Open(strFilePath, CFile::modeReadWrite);

		//逐行读取字符串
		CString szLine;
		CString strText;
		while (file.ReadString(szLine))
		{
			strText += szLine;
		}
		//这里得到的strText就是我们文章内部的内容，得到内容之后我们就可以进行我们需要进行的操作了
		//SetDlgItemText(ID_showBox, strText);//这里是时候我们将我们的内容显示到ID是ID_showBox的组件中（实际上这是一个编辑框）
		//关闭文件
		file.Close();
	}
}
