// CSetTextDLG.cpp : implementation file
//

#include "pch.h"
#include "CStringDs.h"
#include "CSetTextDLG.h"
#include "afxdialogex.h"


// CSetTextDLG dialog

IMPLEMENT_DYNAMIC(CSetTextDLG, CDialog)

CSetTextDLG::CSetTextDLG(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DLG_SET_TEXT, pParent)
	, n_text(_T(""))
	, n_text2(_T(""))
	, n_output(_T(""))
	, noutput(_T(""))
{

}

CSetTextDLG::~CSetTextDLG()
{
}

void CSetTextDLG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, n_text);
	DDX_Text(pDX, IDC_EDIT2, n_text2);
	DDX_Text(pDX, IDC_OUTPUT, n_output);
	DDX_Text(pDX, IDC_EDIT3, noutput);
}


BEGIN_MESSAGE_MAP(CSetTextDLG, CDialog)
	ON_EN_CHANGE(IDC_EDIT2, &CSetTextDLG::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &CSetTextDLG::OnBnClickedButton1)
	ON_STN_CLICKED(IDC_OUTPUT, &CSetTextDLG::OnStnClickedOutput)
END_MESSAGE_MAP()


// CSetTextDLG message handlers


void CSetTextDLG::OnEnChangeEdit2()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CSetTextDLG::OnBnClickedButton1()
{
	CSetTextDLG dlg;
	CString s1 = dlg.n_text;
	CString s2 = dlg.n_text2;
	CString output;
	
}


void CSetTextDLG::OnStnClickedOutput()
{
	// TODO: Add your control notification handler code here
}
