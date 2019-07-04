#pragma once
#include "Cdeviceresourse.h"


// Cwork 对话框

class Cwork : public CDialogEx
{
	DECLARE_DYNAMIC(Cwork)

public:
	Cwork(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cwork();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_work };
#endif
private:
	Cdeviceresourse dlg;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnPaint();
	

//	CEdit m_editshow1;
};
