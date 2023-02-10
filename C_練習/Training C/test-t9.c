/*
 * @Author: your name
 * @Date: 2021-09-05 21:34:47
 * @LastEditTime: 2021-09-06 18:57:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-9t.c
 */

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//* 循环嵌套
int main()
{
    int a, b;
    printf("请输入两个数：");
    scanf("%d%d", &a, &b);
    if (a != b)
    {

        if (a > b)
        {
            printf("%d > %d\n", a, b);
        }
        else
        {
            printf("%d < %d\n", a, b);
        }
    }
    else
    {
        printf("%d = %d", a, b);
    }

    return 0;
}
