#pragma once


// CInformWaitDialog �Ի���

class CInformWaitDialog : public CDialog
{
	DECLARE_DYNAMIC(CInformWaitDialog)

public:
	CInformWaitDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CInformWaitDialog();

// �Ի�������
	enum { IDD = IDD_WAITDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
