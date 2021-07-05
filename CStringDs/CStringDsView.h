
// CStringDsView.h : interface of the CCStringDsView class
//

#pragma once


class CCStringDsView : public CView
{
protected: // create from serialization only
	CCStringDsView() noexcept;
	DECLARE_DYNCREATE(CCStringDsView)

// Attributes
public:
	CCStringDsDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CCStringDsView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CStringDsView.cpp
inline CCStringDsDoc* CCStringDsView::GetDocument() const
   { return reinterpret_cast<CCStringDsDoc*>(m_pDocument); }
#endif

