/*
 * @Author: your name
 * @Date: 2021-09-10 20:19:25
 * @LastEditTime: 2021-09-10 20:22:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t24.c
 */

#include <stdio.h>

int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
