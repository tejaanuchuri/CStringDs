#pragma once


// CSetTextDLG dialog

class CSetTextDLG : public CDialog
{
	DECLARE_DYNAMIC(CSetTextDLG)

public:
	CSetTextDLG(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CSetTextDLG();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_SET_TEXT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString n_text;
	afx_msg void OnEnChangeEdit2();
	CString n_text2;
};
