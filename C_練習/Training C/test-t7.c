/*
 * @Author: your name
 * @Date: 2021-09-05 18:44:21
 * @LastEditTime: 2021-09-05 19:33:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t7..c
 */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    //* if语句（1）
    /* 
    * ...//其他语句
    * if(表达式)
    * {
    *  ....// 逻辑值为真所执行的语句，程序块
    * }
    *  ....// 其他语句
    */
    int input = 0;
    printf("您老贵庚啊！\n");
    scanf("%d", &input);
    if (input > 0 && input < 18)
        printf("未成年\n");
        
    if (input >= 18 && input <= 30)
    {
        printf("你是年轻人！\n");
    }
    if (input >= 30 && input <= 50)
    {
        printf("您是中年人　俺はオジサンではない\n");
    }
    if (input >= 50 && input <= 80)
    {
        printf("您是老年人\n");
    }
    else
    {
        ;
    }
}
