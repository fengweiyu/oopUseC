/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeInheritanceTest.c
* Description		: 	继承

book@book-desktop:/work/projects/test$ gcc -o RealizeInheritanceTest RealizeEncapsulation.c RealizeInheritance.c RealizeInheritanceTest.c 
book@book-desktop:/work/projects/test$ ./RealizeInheritanceTest 
FatherGetIP:218.17.161.66,Port:21213
Son:OOP_V1.0.0

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
#include"RealizeInheritance.h"

#define STRING_MAX_LEN	(15)
/*****************************************************************************
-Fuction		: main
-Description	: main
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
int main(int argc,char **argv)
{
	char strIp[STRING_MAX_LEN];
	unsigned short wPort;

	T_ParaOpr tParaOpr=newParaOpr;//创建父类实例化对象
	T_VersionParaOpr tVersionParaOpr=newVersionParaOpr(tParaOpr);//创建子类实例化对象
	
	tVersionParaOpr.tParaOpr.GetPara(strIp,STRING_MAX_LEN,&wPort);//访问父类公有函数
	printf("FatherGetIP:%s,Port:%d\r\n",strIp,wPort);
	tVersionParaOpr.PrintVersion();//访问子类自己的公有函数

	return 0;	
}

