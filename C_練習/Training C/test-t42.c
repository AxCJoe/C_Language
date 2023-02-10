/*
 * @Author: your name
 * @Date: 2021-09-16 12:46:24
 * @LastEditTime: 2021-09-16 13:48:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t42.c
 */
#include<stdio.h>

int main()

{
    //* 常量不能被改变  #define PI 3.14 
    //* 变量可以被改变  a = 1.1

    //* const 关键字可以把常量变成变量
    
    const float pi = 3.14;
    printf("%f\n",pi);
    //* pi = 3.1415; 在定义修改不可
    return 0;

}
