// Cshiyan8.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "Cshiyan8.h"
#include "afxdialogex.h"


// Cshiyan8 对话框

IMPLEMENT_DYNAMIC(Cshiyan8, CDialogEx)

Cshiyan8::Cshiyan8(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_shiyan8, pParent)
{

}

Cshiyan8::~Cshiyan8()
{
}

void Cshiyan8::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cshiyan8, CDialogEx)
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON1, &Cshiyan8::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &Cshiyan8::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &Cshiyan8::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &Cshiyan8::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cshiyan8::OnBnClickedButton3)
END_MESSAGE_MAP()


// Cshiyan8 消息处理程序


void Cshiyan8::OnPaint()
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

HBRUSH Cshiyan8::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性
	static CBrush gBr;
	static bool isInited = false;
	if (!isInited)
	{
		CBitmap bitmap;
		bitmap.LoadBitmap(IDB_BITMAP1);
		gBr.CreatePatternBrush(&bitmap);
		COLORREF clearColor = -1;
		bitmap.DeleteObject();
		isInited = true;
	}
	if (pWnd == this)
	{
		pDC->SetBkMode(TRANSPARENT);
		return gBr; //主窗口背景使用这个背景刷
	}
	else
	{
		pDC->SetBkMode(TRANSPARENT);
		return   (HBRUSH)::GetStockObject(NULL_BRUSH); //其他控件使用透明背景
	}


	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;

}



void Cshiyan8::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(TEXT("实验报表生成！"));
}


void Cshiyan8::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	OnBnClickedopenGetFile();
}


void Cshiyan8::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	OnBnClickedopenGetFile();
}
void Cshiyan8::OnBnClickedopenGetFile()
{
	// 设置过滤器   
	TCHAR szFilter[] = _T("*.doc|*.doc|*.pdf|*.pdf||");
	// 构造打开文件对话框   
	CFileDialog fileDlg(TRUE, _T("doc"), NULL, 0, szFilter, this);
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

void Cshiyan8::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg.ShowWindow(SW_SHOWNORMAL);
}


BOOL Cshiyan8::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	// TODO: 在此添加额外的初始化代码
	dlg.Create(IDD_shiyan8report);
	dlg1.Create(IDD_shiyan8fenxi);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Cshiyan8::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg1.ShowWindow(SW_SHOWNORMAL);
}
