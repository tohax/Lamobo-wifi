#pragma once


// CPreviewDlag �Ի���

class CPreviewDlag : public CDialog
{
	DECLARE_DYNAMIC(CPreviewDlag)

public:
	CPreviewDlag(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPreviewDlag();

// �Ի�������
	enum { IDD = IDD_DIALOG_PREVIEW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};
