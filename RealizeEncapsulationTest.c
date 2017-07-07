/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeEncapsulation.c
* Description		: 	封装	
book@book-desktop:/work/projects/test$ gcc -o RealizeEncapsulationTest RealizeEncapsulation.c RealizeEncapsulationNoStaticVariable.c RealizeEncapsulationTest.c
book@book-desktop:/work/projects/test$ ./RealizeEncapsulationTest 
GetIP:218.17.161.66,Port:21213
AfterSet,IP:192.168.12.1,Port:12322
AfterSetValue,IP:192.168.1.1,Port:12222


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
#include"RealizeEncapsulation.h"
#include"RealizeEncapsulationNoStaticVariable.h"

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
	//缺陷:多个对象访问的是同一个私有变量(所以并发要加锁)
	T_ParaOpr tParaOpr=newParaOpr;//创建实例化对象
	tParaOpr.GetPara(strIp,STRING_MAX_LEN,&wPort);
	printf("GetIP:%s,Port:%d\r\n",strIp,wPort);
	
	strncpy(strIp,"192.168.12.1",sizeof("192.168.12.1"));
	wPort=12322;
	tParaOpr.SetPara(strIp,wPort);
	tParaOpr.GetPara(strIp,STRING_MAX_LEN,&wPort);
	printf("AfterSet,IP:%s,Port:%d\r\n",strIp,wPort);
	//私有变量在外部，虽然没静态但破坏了封装性,所以上一种更好
	char strIpValue[STRING_MAX_LEN];
	unsigned short wPortValue;
	T_NetParaOpr tNetParaOpr=newNetParaOpr(strIpValue,wPortValue);//创建实例化对象	，传入变量
	strncpy(strIp,"192.168.1.1",sizeof("192.168.1.1"));
	wPort=12222;
	tNetParaOpr.SetPara(&tNetParaOpr,strIp,wPort);
	tNetParaOpr.GetPara(&tNetParaOpr,strIp,&wPort);
	printf("AfterSetValue,IP:%s,Port:%d\r\n",strIp,wPort);
	return 0;	
}

