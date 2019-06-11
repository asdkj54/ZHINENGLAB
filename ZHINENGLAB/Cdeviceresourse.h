#pragma once
#include "CtestM.h"
#include "CdeviceMs.h"
#include "CresourseMs.h"

// Cdeviceresourse 对话框

class Cdeviceresourse : public CDialogEx
{
	DECLARE_DYNAMIC(Cdeviceresourse)

public:
	Cdeviceresourse(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cdeviceresourse();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_deviceresourse };
#endif
private:
	CtestM dlg;
	CdeviceMs dlg1;
	CresourseMs dlg2;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnPaint();
};
