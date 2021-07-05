
// CStringDsDoc.cpp : implementation of the CCStringDsDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "CStringDs.h"
#endif

#include "CStringDsDoc.h"
#include "CSetTextDLG.h"
#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCStringDsDoc

IMPLEMENT_DYNCREATE(CCStringDsDoc, CDocument)

BEGIN_MESSAGE_MAP(CCStringDsDoc, CDocument)
	ON_COMMAND(ID_CSTRING_OPENDIALOG, &CCStringDsDoc::OnCstringOpendialog)
END_MESSAGE_MAP()


// CCStringDsDoc construction/destruction

CCStringDsDoc::CCStringDsDoc() noexcept
{
	// TODO: add one-time construction code here

}

CCStringDsDoc::~CCStringDsDoc()
{
}

BOOL CCStringDsDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CCStringDsDoc serialization

void CCStringDsDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CCStringDsDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CCStringDsDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data.
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CCStringDsDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CCStringDsDoc diagnostics

#ifdef _DEBUG
void CCStringDsDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCStringDsDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCStringDsDoc commands


void CCStringDsDoc::OnCstringOpendialog()
{
	//AfxMessageBox(L"Hello World Teja Anuchuri...!");
	// TODO: Add your command handler code here
	CSetTextDLG dlgSetText;
	if (dlgSetText.DoModal() == IDOK) {
		CString S1 = dlgSetText.n_text;
		CString S2 = dlgSetText.n_text2;
		CString output;
		if (S1 == S2) {
			output.Append(L"String Are Equal");
		}
		else {
			output.Append(L"String Are Not Equal");
		}
		m_text.Append(output);
		UpdateAllViews(NULL);
	}
	
}
