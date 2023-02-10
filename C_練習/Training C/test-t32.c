/*
 * @Author: your name
 * @Date: 2021-09-12 15:06:50
 * @LastEditTime: 2021-09-12 17:40:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t32.c
 */

#include<stdio.h>


int main()
{
    //* 指针数组
    char *p1[5]= {"自信","净化","从简","科学","自律"};
    char *p2[5]= {'a','b','c','d','e'}; //* 两个以上是字符串
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s\n",p1[i]);//* *p[i] 字符地址 p[i] 字符串
    }
    for (i = 0; i < 5; i++)
    {
        printf("%c\n",p2[i]);
    }
    
    return 0;
}
