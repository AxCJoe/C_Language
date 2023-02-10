/*
 * @Author: your name
 * @Date: 2021-09-15 14:59:13
 * @LastEditTime: 2021-09-15 15:16:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t40.c
 */
#include <stdio.h>

int main()
{
    // int array[10] = {0,1,2,3,4,5,6,7,8,9};
    // int *p = array;
    // int i;

    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d\n",*(p+i));
    // }
    
    int array2[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int **p = array2;
    int i,j;
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         printf("%2d\n"*(*(p+i)+j));
    //     }
    //     printf("\n");
    // }
    printf("p: %p  array : %p\n",p,array2);
    printf("p+1: %p  array+1: %p\n",p+1,array2+1);




    return 0;
}
