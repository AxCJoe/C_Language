/*
 * @Author: your name
 * @Date: 2021-09-06 23:35:43
 * @LastEditTime: 2021-09-06 23:56:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t11.c
 */

#include <stdio.h>

int main()
{
    /* 
    * while(表达式)
    * 循环体
    */
    int i = 1, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("sum = %d\ni = %d\n", sum, i);


    int count = 0;
    printf("请输入你要计算的字符个数：");
    while (getchar() != '\n')
    {
        count = count + 1;
    }
    printf("您总共输入了%d的字符！\n",count);
    return 0;

}
