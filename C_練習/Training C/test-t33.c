/*
 * @Author: your name
 * @Date: 2021-09-12 17:38:25
 * @LastEditTime: 2021-09-12 17:50:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t33.c
 */

#include <stdio.h>

int main()
{
    //* 数组指针
    //* 结论：数组指针是一个指针，它指向的是一个数组
    int temp[] = {0, 1, 2, 3, 4, 5};
    int (*p)[] = &temp;
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d\n",*(*p+i));
    }
    

    return 0;
}
