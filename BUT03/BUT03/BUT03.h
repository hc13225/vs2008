
// BUT03.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBUT03App:
// �йش����ʵ�֣������ BUT03.cpp
//

class CBUT03App : public CWinAppEx
{
public:
	CBUT03App();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBUT03App theApp;