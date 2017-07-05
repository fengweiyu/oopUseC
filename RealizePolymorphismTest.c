/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizePolymorphismTest.c
* Description		: 	��̬:��ͬ��ʽ,���ֲ�ͬ״̬(���崦��ɲ�ͬ)
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
	char strPara[STRING_MAX_LEN]={0};//�ַ�������Ҫ����,��ֹ�������
	unsigned short wPara;

	T_ParaOpr tParaOpr=newParaOpr;//����ʵ��������,
	//������ٳ�ʼ����Ҫǿ��ת��һ��
	tParaOpr=(T_ParaOpr)newSmsParaOpr;//��������ʵ��������,��������ת��
	
	tParaOpr.GetPara(strPara,STRING_MAX_LEN,&wPara);//��ͬ��ʽ������ʹ���ĸ�����ͬ
	printf("GetPara:%s,Port:%d\r\n",strPara,wPara);
	
	strncpy(strPara,"123454678",sizeof("123454678"));
	wPara=123;
	tParaOpr.SetPara(strPara,wPara);//�ⲿ��֪�����崦������һ��
	tParaOpr.GetPara(strPara,STRING_MAX_LEN,&wPara);
	printf("AfterSet strPara:%s,wPara:%d\r\n",strPara,wPara);

	return 0;	
}

