/*
 * @Author: your name
 * @Date: 2021-09-10 18:30:36
 * @LastEditTime: 2021-09-10 19:59:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t21.c
 */
#include <stdio.h>

int main()
{
    //* 数组的定义
    //* 类型 数组名[元素个数]
    int a[6];
    char b[24];
    double c[3];
    //* 数组下标
    a[0]; //* 访问a数组中的第一个元素
    a[1]; //* 访问a数组中的第二个元素
    a[5]; //* 访问a数组中的第四个元素
    //* 数组越界
    int d[5]; //* 虽然创建5个元素的数组但是下标为0-4
        d[5]; //* a[5]越界 a[0-4]之间的下标有效
    return 0;
}
