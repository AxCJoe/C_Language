/*
 * @Author: your name
 * @Date: 2021-09-07 16:42:50
 * @LastEditTime: 2021-09-08 00:00:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t13.c
 */
#include <stdio.h>

int main()

{
    //* for 表达式1，表达式2，和表达式3可以按照需要进行省略(但分号不能省);
    // * -for(;表达式2;表达式3)
    // * -for(表达式1;表达式2)
    // * -for(表达式1;;)
    // * -for( ; ; ) -- 这么写如同 while(1){} 功能
    int i;
    int j;
    for (i = 0; i < 10; i++)
    {
        printf("打印输出\n");
    }

    for (i = 0, j = 10; i < j; i++, j--) //* 其他写法
    {
        printf("i = %d\nj = %d\n\n", i, j);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("i = %d,j = %d\n", i, j);
        }
    }

    for (i = 1; i <= 9; i++)
    {
        for (j = 9; j >= i; j--)
        {
            printf("%d*%d=%-2d  ", i, j, i * j);
        }
        putchar('\n');
    }

    for (i = 9; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d  ", i, j, i * j);
        }
        putchar('\n');
    }
    
    for (i = 1; i <= 9; i++)
    {
       
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d  ", i, j, i * j);
    
        }
        putchar('\n');
    }

    return 0;
}
