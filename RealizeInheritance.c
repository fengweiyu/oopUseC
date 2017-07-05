/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeInheritance.c
* Description		: 	整个文件只包含类相关的变量及操作
* Created			: 	2017.07.02.
* Author			: 	Yu Weifeng
* Function List 		: 	
* Last Modified 	: 	
* History			: 	
******************************************************************************/
#include"stdio.h"
#include"malloc.h"
#include"stdlib.h"
#include"string.h"



static char *g_strSoftVersion="OOP_V1.0.0";


/*****************************************************************************
-Fuction		: PrintVersion
-Description	: 公有函数
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void PrintVersion()
{
	printf("Son:%s\r\n",g_strSoftVersion);
}

