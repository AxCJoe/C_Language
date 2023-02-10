/*
 * @Author: your name
 * @Date: 2021-09-16 14:44:04
 * @LastEditTime: 2021-09-16 14:57:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t45.c
 */
#include <stdio.h>

int main()
{

    //* 指向常量的常量指针
    //* - 指针自身不可以被修改
    //* - 指针指向的值也不可以被修改
    int num = 120;
    const int cnum = 110;
    const int * const p = &cnum;

    //* *p = 1024;
    //* printf("*p: %d\n",*p);

    //* p = &cnum;
    //* printf("*p: %d\n",*p);
    //* 上述注释无法修改

    num = 1024;
    printf("*p:%d\n",num);

    return 0;
}
