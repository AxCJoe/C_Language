/*
 * @Author: your name
 * @Date: 2021-09-14 19:50:33
 * @LastEditTime: 2021-09-14 19:59:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t37.c
 */

#include<stdio.h>

int main()
{

    //* NULL指针
    //* C语言中如果一个指针不指向任何数据就说明是空指针
    //* #define NULL ((void *)0)
    //* 当你还不清楚要将指针初始化为什么地址时，请将它初始化NULL;
    //* 在对指针急性解引用时，先检查该指针是否为NULL。
    //* 这种策略可以为你今后编写大型程序节省大量的调试时间。

    
        int *p1;
        int *p2 = NULL;

        printf("%d\n", *p1); //* 不赋值的指针称之为迷途指针或野指针。
        printf("%d\n", *p2);

    

    return 0;
}
