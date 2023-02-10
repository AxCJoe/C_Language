/*
 * @Author: your name
 * @Date: 2021-09-11 21:50:54
 * @LastEditTime: 2021-09-11 23:17:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t29.c
 */

#include <stdio.h>
#include <string.h>
int main()

{
    //* 指针指向数组
    char *str = "abcdefg";
    int i,length;
    length = strlen(str);
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }
    
    //*  二维数组的测试
    // char str2[4][3] = {{"abc"},{"def"},{"g"}};
    // int *p = str2;
    // int len;
    // len = strlen(str2);
    // printf("%d \n",strlen(str2));
    // for (a = 0; a < strlen(*p); a++)
    // {
    //     for ( b = 0; b < i; b++)
    //     {
    //         printf("%c",str2[a][b]);
    //     }
        
    // }
    
    return 0;
}
