#pragma once


// CPreviewDialog �Ի���

class CPreviewDialog : public CDialog
{
	DECLARE_DYNAMIC(CPreviewDialog)

public:
	CPreviewDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPreviewDialog();

// �Ի�������
	enum { IDD = IDD_DIALOG_PREVIEW1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};
