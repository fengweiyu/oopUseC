/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeInheritance.h
* Description		: 	
* Created			: 	2017.07.02.
* Author			: 	Yu Weifeng
* Function List 		: 	
* Last Modified 	: 	
* History			: 	
******************************************************************************/
#ifndef REALIZE_INHERITANCE_H
#define REALIZE_INHERITANCE_H
#include"RealizeEncapsulation.h"

void PrintVersion();

typedef struct VersionParaOpr
{
	T_ParaOpr tParaOpr;//ºÃ≥–∏∏¿‡
	void (*PrintVersion)();
}T_VersionParaOpr;
#define newVersionParaOpr(ParaOpr) {ParaOpr,PrintVersion}






#endif
