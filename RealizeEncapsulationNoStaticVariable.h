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
	char *strIp;//也可以使用空指针,函数使用时进行转换,
	//但会导致隐含条件,外部传入的类型必须与内部使用的类型一致
	unsigned short wPort;//变量放在外面,暴露了数据,破坏了封装性
	void (*SetPara)(struct NetParaOpr *i_ptNetParaOpr,char *i_strIp,unsigned short i_wPort);
	void (*GetPara)(struct NetParaOpr *i_ptNetParaOpr,char *o_strIp,unsigned short *o_wPort);
}T_NetParaOpr;//定义类

void SetNetPara(T_NetParaOpr *i_ptNetParaOpr,char *i_strIp,unsigned short i_wPort);//公有函数声明
void GetNetPara(T_NetParaOpr *i_ptNetParaOpr,char *o_strIp,unsigned short *o_wPort);//公有函数声明
#define newNetParaOpr(Ip,Port) {Ip,Port,SetNetPara,GetNetPara} //类似构造函数




#endif
