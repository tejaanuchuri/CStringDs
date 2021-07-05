#pragma once


// CStringLength dialog

class CStringLength : public CDialog
{
	DECLARE_DYNAMIC(CStringLength)

public:
	CStringLength(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CStringLength();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_LENGTH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString stringname;
};
