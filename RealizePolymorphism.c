/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizePolymorphism.c
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
#include"RealizePolymorphism.h"

#define PHONE_NUM_MAX_LEN	(12)

static char g_strPhoneNum[PHONE_NUM_MAX_LEN];//˽�б���
static unsigned short g_wDeviceId;//˽�б���


/*****************************************************************************
-Fuction		: InitSmsPara
-Description	: ˽�к���
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
static void InitSmsPara()
{
	//���߳̿��ڲ�����
	strncpy(g_strPhoneNum,"13677905555",PHONE_NUM_MAX_LEN);
	g_wDeviceId=12346;
}

/*****************************************************************************
-Fuction		: SetSmsPara
-Description	: ���к���
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void SetSmsPara(char *i_strPhoneNum,unsigned short i_wDeviceId)
{
	//���߳̿��ڲ�����
	strncpy(g_strPhoneNum,i_strPhoneNum,PHONE_NUM_MAX_LEN);
	g_wDeviceId=i_wDeviceId;
}
/*****************************************************************************
-Fuction		: GetSmsPara
-Description	: ���к���
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void GetSmsPara(char *o_strPhoneNum,char i_strPhoneNumMaxLen,unsigned short *o_wDeviceId)
{
	//���߳̿��ڲ�����
	if(NULL==g_strPhoneNum||g_wDeviceId==0)
	{
		InitSmsPara();
	}
	else
	{
	}
	strncpy(o_strPhoneNum,g_strPhoneNum,i_strPhoneNumMaxLen);
	*o_wDeviceId=g_wDeviceId;
}


