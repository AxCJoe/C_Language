/*
 * @Author: your name
 * @Date: 2021-09-12 17:53:52
 * @LastEditTime: 2021-09-13 00:20:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-34.c
 */

#include <stdio.h>

int main()

{
    //* 二维数组的定义
    int array[4][5] = {0};
    printf("sizeof int:%d\n", sizeof(int));
    printf("array :%p\n", array);
    printf("array + 1:%p\n", array + 1);

    //* (array + 1)表示的是什么？
    //* (array + 1) == array[1]
    int tmp[4][5] = {0};
    int i, j, k = 0;
    printf("%d\n",tmp[4][5]);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            tmp[i][j] = k++;
            printf("%d\n",tmp[i][j]);
        }
    }
    printf("\n*(tmp+1): %p\n", *(tmp + 1));
    printf("tmp[1]: %p\n", tmp[1]);
    printf("tmp[1][0]: %p\n", &tmp[1][0]);
    printf("**(tmp+1): %d\n", **(tmp + 1)); //* 双重解引用

    //* (array+1)+3 == &array[1][3]
    printf("*(*(tmp+1)+3): %d\n", *(*(tmp + 1) + 3));
    printf("array[1][3]: %d\n", tmp[1][3]);

    //* *(array+i) == array[i]
    //* *(*(array+i)+j) == array[i][j]
    //* *(*(*(array+i)+j)+k) == array[i][j][k]
    return 0;

}
