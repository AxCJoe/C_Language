/*
 * @Author: your name
 * @Date: 2021-09-12 14:33:17
 * @LastEditTime: 2021-09-12 15:06:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t31.c
 */

#include <stdio.h>

int main()
{
    //*指针数组 和 数组指针

    int *p1[5]; //* 这个是指针数组

    int(*p2)[5]; //* 这个是数组指针

    int i, j, a = 1, b = 2, c = 3, d = 4, e = 5;
    int *p3[] = {&a, &b, &c, &d, &e};

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *p3[i]);

        //* 这段测试
        // for (j = 0; j <= i; j++)
        // {
        //     printf("%d %d\n", *p3[i],*p3[j]);
        // }
    }

    return 0;
}
