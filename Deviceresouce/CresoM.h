#pragma once


// CresoM 对话框

class CresoM : public CDialogEx
{
	DECLARE_DYNAMIC(CresoM)

public:
	CresoM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CresoM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_resoM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listres;
	virtual BOOL OnInitDialog();
};
