/*
 * @Author: your name
 * @Date: 2021-09-11 21:50:48
 * @LastEditTime: 2021-09-12 14:33:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t30.c
 */

#include <stdio.h>

int main()

{
    //* 不使用函数来算出数组长度
    
    char str[]="abcdfg";
    char *tar = str;
    int count = 0;
    while(*tar++ != '\0')
    {
        count++;

    }
    printf("计算出来的数组个数是%d\n", count);
    return 0;
}
