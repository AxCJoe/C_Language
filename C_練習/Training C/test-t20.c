/*
 * @Author: your name
 * @Date: 2021-09-10 18:20:02
 * @LastEditTime: 2021-09-10 18:22:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t20.c
 */
#include <stdio.h>

int main()

{
    
    int i = 5;
    while(i++)
    {
        if(i>10)
        {
            goto A;
        }

    }
A:  printf("Here,i = %d\n",i);


    return 0;
}
