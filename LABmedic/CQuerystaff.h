#pragma once


// CQuerystaff 对话框

class CQuerystaff : public CDialogEx
{
	DECLARE_DYNAMIC(CQuerystaff)

public:
	CQuerystaff(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CQuerystaff();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Querystaff };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
private:
	CListCtrl m_listQuerystaff;
};
