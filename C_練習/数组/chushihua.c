/*
 * @Author: your name
 * @Date: 2021-09-10 19:05:13
 * @LastEditTime: 2021-09-10 19:13:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t23.c
 */
#include <stdio.h>

int main()

{
    /*
    * 数组初始化
    * 将数组中所有元素初始化为0，可以这么写 
    */
    int a[10] = {0};
    
    /*
    * 如果是赋予不同的值，那么用逗号分隔开即可
    */
    int b[10] = {1,2,3,4,5,6,7,8,9,10};

    /*
    * 给一部分元素赋值
    * 未被赋值的元素自动初始为 0
    */
    int c[10] = {1,2,3,4,5} //* 5以后都为0

    /*
    * 给出元素个数，不用指定长度
    */
    int a[] = {1,2,3,4,5,6,7,8,9,0}; //* 默认长度就是10
    return 0;
}
