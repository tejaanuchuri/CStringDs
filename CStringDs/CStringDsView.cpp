
// CStringDsView.cpp : implementation of the CCStringDsView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "CStringDs.h"
#endif

#include "CStringDsDoc.h"
#include "CStringDsView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCStringDsView

IMPLEMENT_DYNCREATE(CCStringDsView, CView)

BEGIN_MESSAGE_MAP(CCStringDsView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCStringDsView construction/destruction

CCStringDsView::CCStringDsView() noexcept
{
	// TODO: add construction code here

}

CCStringDsView::~CCStringDsView()
{
}

BOOL CCStringDsView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CCStringDsView drawing

void CCStringDsView::OnDraw(CDC* pDC)
{
	CCStringDsDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(220, 400, pDoc->GetText());
	// TODO: add draw code for native data here
}


// CCStringDsView printing

BOOL CCStringDsView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCStringDsView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCStringDsView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CCStringDsView diagnostics

#ifdef _DEBUG
void CCStringDsView::AssertValid() const
{
	CView::AssertValid();
}

void CCStringDsView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCStringDsDoc* CCStringDsView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCStringDsDoc)));
	return (CCStringDsDoc*)m_pDocument;
}
#endif //_DEBUG


// CCStringDsView message handlers
