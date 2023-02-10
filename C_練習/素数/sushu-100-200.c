/*
 * @Author: your name
 * @Date: 2021-09-10 08:34:47
 * @LastEditTime: 2021-09-10 09:17:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\sushu-100-200.c
 */

#include <stdio.h>
#include <math.h>
int main()

{

    //* sqrt 函数利用的情况下编写
    int i, j;
    for (i = 100; i <= 200; i++)
    {
        for (j = 2; j < sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (i % j != 0)
            printf("%d \n", i);
    }

    return 0;
}
