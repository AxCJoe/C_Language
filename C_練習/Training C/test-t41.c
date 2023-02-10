/*
 * @Author: your name
 * @Date: 2021-09-15 15:21:06
 * @LastEditTime: 2021-09-15 15:24:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t41.c
 */

#include<stdio.h>

int main()
{

    int array2[][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int (*p)[4] = array2;
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%2d ",*(*(p+i)+j));
        }
        printf("\n");
    }

    return 0;
}
