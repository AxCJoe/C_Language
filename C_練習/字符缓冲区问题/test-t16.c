/*
 * @Author: your name
 * @Date: 2021-09-10 15:49:06
 * @LastEditTime: 2021-09-10 15:58:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t16.c
 */

#include <stdio.h>

int main()
{
    //* 字符缓冲区 及 continue问题

    int ch;

    while((ch = getchar())!='\n')
    {
        if(ch == 'c')
            continue;
        putchar(ch);
    } 
    putchar('\n');

    //* getchar putchar 
    //* ((ch = getchar())!='\n')
    //! ch = getchar != '\n'

    return 0;
}
