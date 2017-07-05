/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizeEncapsulationNoStaticVariable.h
* Description		: 	RealizeEncapsulationNoStaticVariable operation center
* Created			: 	2017.06.24.
* Author			: 	Yu Weifeng
* Function List 		: 	
* Last Modified 	: 	
* History			: 	
******************************************************************************/
#ifndef _REALIZE_ENCAPSULATION_NO_STATIC_VARIABLE_H
#define _REALIZE_ENCAPSULATION_NO_STATIC_VARIABLE_H




typedef struct NetParaOpr
{
	char *strIp;//Ҳ����ʹ�ÿ�ָ��,����ʹ��ʱ����ת��,
	//���ᵼ����������,�ⲿ��������ͱ������ڲ�ʹ�õ�����һ��
	unsigned short wPort;//������������,��¶������,�ƻ��˷�װ��
	void (*SetPara)(struct NetParaOpr *i_ptNetParaOpr,char *i_strIp,unsigned short i_wPort);
	void (*GetPara)(struct NetParaOpr *i_ptNetParaOpr,char *o_strIp,unsigned short *o_wPort);
}T_NetParaOpr;//������

void SetNetPara(T_NetParaOpr *i_ptNetParaOpr,char *i_strIp,unsigned short i_wPort);//���к�������
void GetNetPara(T_NetParaOpr *i_ptNetParaOpr,char *o_strIp,unsigned short *o_wPort);//���к�������
#define newNetParaOpr(Ip,Port) {Ip,Port,SetNetPara,GetNetPara} //���ƹ��캯��




#endif
