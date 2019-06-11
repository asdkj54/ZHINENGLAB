#pragma once


// Csafelog 对话框

class Csafelog : public CDialogEx
{
	DECLARE_DYNAMIC(Csafelog)

public:
	Csafelog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Csafelog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_safelog };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit m_editcontrol1;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit1();
};
