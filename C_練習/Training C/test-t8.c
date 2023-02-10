/*
 * @Author: your name
 * @Date: 2021-09-05 19:46:30
 * @LastEditTime: 2021-09-05 21:34:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t8.c
 */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

  /*
 * ....//其它语句
 * swich(表达式)
 * {
 *    case 常量表达式1: 语句或程序块1
 !       break; //不接break会所有都执行
 *    case 常量表达式2: 语句或程序块2
 *    ....
 *    default: 语句或程序块n+1  //在程序里输出错误已经不存在对象时默认执行
 * 
  */
int main()
{
    char ch;
    printf("请输入成绩: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':printf("成绩在90分"); break;
    case 'B':printf("成绩在80分"); break;
    case 'C':printf("成绩在60分"); break;
    case 'D':printf("成绩在50分"); break;
    default:printf("输入错误请从新输入");
    }

    return 0;
}
