/*
 * @Author: your name
 * @Date: 2021-09-10 16:05:08
 * @LastEditTime: 2021-09-10 16:11:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t17.c
 */

#include <stdio.h>

int main()

{
    int i = 0;
    while (i < 100)
    {
        i++;
        if (i % 2)
        {
            printf("%d\n", i);
            continue;
        }
        //printf("%d\n",i);
    }

    return 0;
}
