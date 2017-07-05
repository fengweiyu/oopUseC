/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeEncapsulationNoStaticVariable.c
* Description		: 	整个文件只包含类相关的操作
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
#include"RealizeEncapsulationNoStaticVariable.h"


#define NET_IP_MAX_LEN	(15)
/*****************************************************************************
-Fuction		: InitNetPara
-Description	: 私有函数
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
static void InitNetPara(char *i_strIp,unsigned short *i_pwPort)
{
	strncpy(i_strIp,"218.17.161.66",NET_IP_MAX_LEN);
	*i_pwPort=21213;
}

/*****************************************************************************
-Fuction		: SetNetPara
-Description	: 公有函数
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void SetNetPara(T_NetParaOpr *i_ptNetParaOpr,char *i_strIp,unsigned short i_wPort)
{
	strncpy(i_ptNetParaOpr->strIp,i_strIp,NET_IP_MAX_LEN);
	i_ptNetParaOpr->wPort=i_wPort;
}
/*****************************************************************************
-Fuction		: GetNetPara
-Description	: 公有函数
-Input			: 
-Output 		: 
-Return 		: 
* Modify Date	  Version		 Author 		  Modification
* -----------------------------------------------
* 2017/06/29	  V1.0.0		 Yu Weifeng 	  Created
******************************************************************************/
void GetNetPara(T_NetParaOpr *i_ptNetParaOpr,char *o_strIp,unsigned short *o_wPort)
{
	if(NULL==i_ptNetParaOpr->strIp||i_ptNetParaOpr->wPort==0)
	{
		InitNetPara(i_ptNetParaOpr->strIp,&i_ptNetParaOpr->wPort);
	}
	else
	{
	}
	strncpy(o_strIp,i_ptNetParaOpr->strIp,NET_IP_MAX_LEN);
	*o_wPort=i_ptNetParaOpr->wPort;
}



