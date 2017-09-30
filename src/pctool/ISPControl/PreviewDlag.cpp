// PreviewDlag.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ISPControl.h"
#include "PreviewDlag.h"


// CPreviewDlag �Ի���

IMPLEMENT_DYNAMIC(CPreviewDlag, CDialog)

CPreviewDlag::CPreviewDlag(CWnd* pParent /*=NULL*/)
	: CDialog(CPreviewDlag::IDD, pParent)
{
}

CPreviewDlag::~CPreviewDlag()
{
}

void CPreviewDlag::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPreviewDlag, CDialog)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()


// CPreviewDlag ��Ϣ�������

void CPreviewDlag::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWnd * pP = GetParent();
	ClientToScreen(&point);
	pP->ScreenToClient(&point);
	pP->SendMessage(WM_LBUTTONDOWN, nFlags, MAKELPARAM(point.x, point.y));
	CDialog::OnLButtonDown(nFlags, point);
}

void CPreviewDlag::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWnd * pP = GetParent();
	ClientToScreen(&point);
	pP->ScreenToClient(&point);
	pP->SendMessage(WM_LBUTTONUP, nFlags, MAKELPARAM(point.x, point.y));

	CDialog::OnLButtonUp(nFlags, point);
}

void CPreviewDlag::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWnd * pP = GetParent();
	ClientToScreen(&point);
	pP->ScreenToClient(&point);
	pP->SendMessage(WM_MOUSEMOVE, nFlags, MAKELPARAM(point.x, point.y));

	CDialog::OnMouseMove(nFlags, point);
}

void CPreviewDlag::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWnd * pP = GetParent();
	ClientToScreen(&point);
	pP->ScreenToClient(&point);
	pP->SendMessage(WM_LBUTTONDBLCLK, nFlags, MAKELPARAM(point.x, point.y));

	CDialog::OnLButtonDblClk(nFlags, point);
}
