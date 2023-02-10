/*
 * @Author: your name
 * @Date: 2021-09-27 00:29:23
 * @LastEditTime: 2021-09-27 00:36:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t52.c
 */

//*  因为数组的开头存放的是地址，所以不需要指针

#include <stdio.h>

void get_array(int a[10]);

void get_array(int a[10])
{
    int i;
    a[5] = 110;
    for (i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;
    get_array(a);
    printf("在main函数里边在打印一次....\n");
    for (i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
