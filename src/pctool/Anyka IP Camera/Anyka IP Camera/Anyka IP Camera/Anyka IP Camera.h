// Anyka IP Camera.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAnykaIPCameraApp:
// �йش����ʵ�֣������ Anyka IP Camera.cpp
//

class CAnykaIPCameraApp : public CWinApp
{
public:
	CAnykaIPCameraApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAnykaIPCameraApp theApp;