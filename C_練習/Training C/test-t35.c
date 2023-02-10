/*
 * @Author: your name
 * @Date: 2021-09-13 00:21:22
 * @LastEditTime: 2021-09-13 00:42:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t35.c
 */

#include <stdio.h>

int main()
{
    //* *(array+i) == array[i]
    //* *(*(array+i)+j) == array[i][j]
    //* *(*(*(array+i)+j)+k) == array[i][j][k]
    
    //* 初始化二维数组
    int array[2][3] = {{0,1,2},{3,4,5}};
    int i,j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
            
        }
            printf("\n");
    }
    int (*p)[3] = array;    
    printf("**(p+1): %d\n",**(p+1));
    printf("**(array+1): %d\n",**(array+1));
    printf("array[1][0]: %d\n",array[1][0]);
    printf("*(*(p+1)+2): %d\n",*(*(p+1)+2));
    printf("*(*(array+1)+2): %d\n",*(*(array+1)+2));
    printf("array[1][2]: %d\n",array[1][2]);
    //* 可以简写成
    //* int array[][3] = {{0,1,2},{3,4,5}};
    
    //* 定义一个数组指针是这样的：
    //*  int (*p)[3];

    //* 那么请问如何解释下边语句
    //* int (*p)[3] = array;

    return 0;



}
