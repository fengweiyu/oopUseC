/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeEncapsulation.c
* Description		: 	�����ļ�ֻ��������صı���������
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

#define IP_MAX_LEN	(15)

static char g_strIp[IP_MAX_LEN];//˽�б���
static unsigned short g_wPort;//˽�б���

/*****************************************************************************
-Fuction		: InitPara
-Description	: ˽�к���
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
static void InitPara()
{
	//���߳̿��ڲ�����
	strncpy(g_strIp,"218.17.161.66",IP_MAX_LEN);
	g_wPort=21213;
}

/*****************************************************************************
-Fuction		: SetPara
-Description	: ���к���
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void SetPara(char *i_strIp,unsigned short i_wPort)
{
	//���߳̿��ڲ�����
	strncpy(g_strIp,i_strIp,IP_MAX_LEN);
	g_wPort=i_wPort;
}
/*****************************************************************************
-Fuction		: GetPara
-Description	: ���к���
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void GetPara(char *o_strIp,char i_strIpMaxLen,unsigned short *o_wPort)
{
	//���߳̿��ڲ�����
	if(NULL==g_strIp||g_wPort==0)
	{
		InitPara();
	}
	else
	{
	}
	strncpy(o_strIp,g_strIp,i_strIpMaxLen);
	*o_wPort=g_wPort;
}



