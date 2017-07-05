/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeEncapsulation.h
* Description		: 	RealizeEncapsulation operation center
* Created			: 	2017.06.24.
* Author			: 	Yu Weifeng
* Function List 		: 	
* Last Modified 	: 	
* History			: 	
******************************************************************************/
#ifndef _REALIZE_ENCAPSULATION_H
#define _REALIZE_ENCAPSULATION_H


void SetPara(char *i_strIp,unsigned short i_wPort);//���к�������
void GetPara(char *o_strIp,char i_strIpMaxLen,unsigned short *o_wPort);//���к�������
#define newParaOpr {SetPara,GetPara} //���ƹ��캯��


typedef struct ParaOpr
{
	void (*SetPara)(char *i_strIp,unsigned short i_wPort);
	void (*GetPara)(char *o_strIp,char i_strIpMaxLen,unsigned short *o_wPort);
}T_ParaOpr;//������



#endif
