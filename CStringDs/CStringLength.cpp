// CStringLength.cpp : implementation file
//

#include "pch.h"
#include "CStringDs.h"
#include "CStringLength.h"
#include "afxdialogex.h"


// CStringLength dialog

IMPLEMENT_DYNAMIC(CStringLength, CDialog)

CStringLength::CStringLength(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DLG_LENGTH, pParent)
	, stringname(_T(""))
{

}

CStringLength::~CStringLength()
{
}

void CStringLength::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_INPUT, stringname);
}


BEGIN_MESSAGE_MAP(CStringLength, CDialog)
END_MESSAGE_MAP()


// CStringLength message handlers
