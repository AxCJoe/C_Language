/*
 * @Author: your name
 * @Date: 2021-09-16 14:33:55
 * @LastEditTime: 2021-09-16 14:43:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t44.c
 */

#include<stdio.h>

int main()

{
    //* 常量指针
    //* 指向非常量指针

    int num = 110;
    const int cnum = 200;//* int const 
    int *const p = &num; 
    *p = 1024; //* 可以被修改
    printf("*p: %d\n",*p);

    //* -指针自身不可以被修改
    //* -指针指向的值可以被修改

    //* p = &cnum;
    //* printf("*p: %d\n",*p);
    return 0;
}
