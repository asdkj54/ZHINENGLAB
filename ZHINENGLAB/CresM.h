#pragma once


// CresM 对话框

class CresM : public CDialogEx
{
	DECLARE_DYNAMIC(CresM)

public:
	CresM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CresM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_resM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listLabresM;
public:
	virtual BOOL OnInitDialog();
};
