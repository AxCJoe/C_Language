/*
 * @Author: your name
 * @Date: 2021-09-02 16:48:56
 * @LastEditTime: 2021-09-05 19:15:00
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t.c
 */
#include <stdio.h>

//*  整型常量： 520,110,123
//*  实型常量：3.14,5.12,8.87
//*  字符常量：
//*  -普通字符:'L'.'b','a'，‘K’
//*  -转义字符：'\n'(换行),'\t'(Tab),'\b'(退格)
//*  字符串常量"Flash"
//*  符号常量：使用之前必须先定义

//*  格式：#define 标识符 常量
//*  比如：#define URL “www.google.com”
//*       #define NAME “Jo = 徐”
//*       #define YEAR 2021
//*       #define MONTH 5
//*       #define DAY 20

//*  字符串：字符串最后是有 \0 作为结束符

#define NAME "Jo"
#define YEAR 1989
#define MONTH 9 //* 字符串09是可以，但是整型的话必须要写9
#define DAY 12

int main()
{

	printf("他叫%s他出生于%d年,%d月,%d日\n", NAME, YEAR, MONTH, DAY);
	return 0;
}
