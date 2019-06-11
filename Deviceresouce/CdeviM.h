#pragma once


// CdeviM 对话框

class CdeviM : public CDialogEx
{
	DECLARE_DYNAMIC(CdeviM)

public:
	CdeviM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CdeviM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_deviM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listdev;
public:
	virtual BOOL OnInitDialog();
};
