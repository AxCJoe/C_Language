/*
 * @Author: your name
 * @Date: 2021-09-11 13:49:38
 * @LastEditTime: 2021-09-11 23:22:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t26.c
 */

#include<stdio.h>

int main()
{
    //* 二维数组[常量表达式][常量表达式]
    int a[6][6]; //* 6*6,6行6列
    char b[4][5]; //* 4*5,4行5列
    double c[6][3]; //* 6*3,6行3列
    
    //* 二维数组的初始化
    //* 3行4列 可容纳12个数字
    int d[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  
    //* e的数组写法容易溢出 说好3行4列就是3行4列
    int e[3][4] = {{1,2,3,4,5},{6,7,8},{9,10,11,12}};
    int f[3][4] = {{1},{5},{12}};
    int g[3][4] = {0};
    int h[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ",d[i][j]);
            
        }
        printf("\n");
        //printf("d[][] = %d",d[i][j]);
    }
    printf("\n");
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            
            printf("%d ",e[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            
            printf("%d ",f[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
     for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            
            printf("%d ",h[j][i]);
        }
        printf("\n");
        
    }



    return 0;
}
