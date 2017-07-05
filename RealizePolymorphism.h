/*****************************************************************************
* Copyright (C) 2017-2018 Hanson Yu  All rights reserved.
------------------------------------------------------------------------------
* File Module		: 	RealizePolymorphism.h
* Description		: 	
* Created			: 	2017.07.02.
* Author			: 	Yu Weifeng
* Function List 		: 	
* Last Modified 	: 	
* History			: 	
******************************************************************************/
#ifndef REALIZE_POLYMORPHISM_H
#define REALIZE_POLYMORPHISM_H

#include<stdbool.h>


void SetSmsPara(char *i_strPhoneNum,unsigned short i_wDeviceId);//���к�������
void GetSmsPara(char *o_strPhoneNum,char i_strPhoneNumMaxLen,unsigned short *o_wDeviceId);//���к�������
#define newSmsParaOpr {SetSmsPara,GetSmsPara} //���ƹ��캯��


typedef struct SmsParaOpr
{
	void (*SetSmsPara)(char *i_strPhoneNum,unsigned short i_wDeviceId);//�ɶԲ����Ĵ����ٷ�װΪ�ṹ��,������java�����е�ͨ���
	void (*GetSmsPara)(char *o_strPhoneNum,char i_strPhoneNumMaxLen,unsigned short *o_wDeviceId);//�ⲿ����֪����������˽ṹ���е���������
	//�����������������ɷ��ʽṹ��Ĳ�ͬ����,�ⲿ��������ʽ��һ�µ�,����֪���ڲ�ʹ�����Ĳ���
}T_SmsParaOpr;//������








#endif
