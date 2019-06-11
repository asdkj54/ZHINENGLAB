#pragma once


// CdevM 对话框

class CdevM : public CDialogEx
{
	DECLARE_DYNAMIC(CdevM)

public:
	CdevM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CdevM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_devM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listLabdevM;
public:
	virtual BOOL OnInitDialog();
};
