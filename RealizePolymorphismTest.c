/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizePolymorphismTest.c
* Description		: 	多态:类似(几乎相同)的形式,各种不同的状态(具体处理可不同)
book@book-desktop:/work/projects/test$ gcc -o RealizePolymorphismTest RealizeEncapsulation.c RealizePolymorphism.c RealizePolymorphismTest.c 
book@book-desktop:/work/projects/test$ ./RealizePolymorphismTest 
GetPara:13677905555,Port:12346
AfterSet strPara:123454678,wPara:123
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
#include"RealizePolymorphism.h"
#include"RealizeEncapsulation.h"

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
	char strPara[STRING_MAX_LEN]={0};//字符数组需要长度,防止意外风险
	unsigned short wPara;

	T_ParaOpr tParaOpr=newParaOpr;//创建实例化对象,
	//定义后再初始化需要强制转换一下
	tParaOpr=(T_ParaOpr)newSmsParaOpr;//创建子类实例化对象,类似向上转型
	
	tParaOpr.GetPara(strPara,STRING_MAX_LEN,&wPara);//相同形式，具体使用哪个不相同
	printf("GetPara:%s,Port:%d\r\n",strPara,wPara);
	
	strncpy(strPara,"123454678",sizeof("123454678"));
	wPara=123;
	tParaOpr.SetPara(strPara,wPara);//外部不知道具体处理是哪一个
	tParaOpr.GetPara(strPara,STRING_MAX_LEN,&wPara);
	printf("AfterSet strPara:%s,wPara:%d\r\n",strPara,wPara);

	return 0;	
}

