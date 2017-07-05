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


void SetSmsPara(char *i_strPhoneNum,unsigned short i_wDeviceId);//公有函数声明
void GetSmsPara(char *o_strPhoneNum,char i_strPhoneNumMaxLen,unsigned short *o_wDeviceId);//公有函数声明
#define newSmsParaOpr {SetSmsPara,GetSmsPara} //类似构造函数


typedef struct SmsParaOpr
{
	void (*SetSmsPara)(char *i_strPhoneNum,unsigned short i_wDeviceId);//可对操作的传参再封装为结构体,类似于java泛型中的通配符
	void (*GetSmsPara)(char *o_strPhoneNum,char i_strPhoneNumMaxLen,unsigned short *o_wDeviceId);//外部并不知道具体操作了结构体中的哪种类型
	//即父子类或其他对象可访问结构体的不同部分,外部看起来形式是一致的,并不知道内部使用了哪部分
}T_SmsParaOpr;//定义类








#endif
