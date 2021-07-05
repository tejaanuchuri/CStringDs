
// CStringDs.h : main header file for the CStringDs application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CCStringDsApp:
// See CStringDs.cpp for the implementation of this class
//

class CCStringDsApp : public CWinApp
{
public:
	CCStringDsApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCStringDsApp theApp;
