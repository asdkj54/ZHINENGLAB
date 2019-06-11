
// TEST_EQUDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "TEST_EQU.h"
#include "TEST_EQUDlg.h"
#include "afxdialogex.h"
#include "Cshiyan2.h"
#include "Cshiyan3.h"
#include "Cshiyan4.h"
#include "Cshiyan5.h"
#include "Cshiyan6.h"
#include "Cshiyan7.h"
#include "Cshiyan8.h"
#include "Cshiyan9.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTESTEQUDlg 对话框



CTESTEQUDlg::CTESTEQUDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TEST_EQU_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTESTEQUDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTESTEQUDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()

	ON_BN_CLICKED(IDC_BUTTON1, &CTESTEQUDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTESTEQUDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &CTESTEQUDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON8, &CTESTEQUDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON3, &CTESTEQUDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CTESTEQUDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &CTESTEQUDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CTESTEQUDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &CTESTEQUDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CTESTEQUDlg::OnBnClickedButton10)
END_MESSAGE_MAP()


// CTESTEQUDlg 消息处理程序

BOOL CTESTEQUDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	dlg.Create(IDD_testpoint);
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CTESTEQUDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CTESTEQUDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		//CDialogEx::OnPaint();********************此处要注释掉
		CPaintDC   dc(this);
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
		dc.StretchBlt(0, 0, rect.Width(), rect.Height(), &dcBmp, 0, 0, m_bitmap.bmWidth, m_bitmap.bmHeight, SRCCOPY );
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CTESTEQUDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTESTEQUDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	dlg.ShowWindow(SW_SHOWNORMAL);
}


void CTESTEQUDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan9 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan4 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan7 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan2 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan3 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan5 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan6 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	Cshiyan8 dlg;
	dlg.DoModal();
}


void CTESTEQUDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	OnBnClickedopenGetFile();
}
void CTESTEQUDlg::OnBnClickedopenGetFile()
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
