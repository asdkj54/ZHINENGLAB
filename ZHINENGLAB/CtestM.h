#pragma once


// CtestM 对话框

class CtestM : public CDialogEx
{
	DECLARE_DYNAMIC(CtestM)

public:
	CtestM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CtestM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_testM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl m_listLabtestM;
public:
	virtual BOOL OnInitDialog();
};
