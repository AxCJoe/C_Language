/*
 * @Author: your name
 * @Date: 2021-09-09 17:01:27
 * @LastEditTime: 2021-09-10 08:29:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t15.c
 */

#include <stdio.h>

int main()

{
    int i = 2;
    int m;
    printf("请输入一个大于1的整数: ");
    scanf("%d", &m);
    while (i < m)
    {
        if(m%i==0)
        {
            break;
            // * printf("这不是个素数！\n");
            // * return 0; //* 对于程序一般只有单入口单出口，两个return 意味着两个出口
        }
        else
        {
            i++;
        }
    }
    if(i == m)
    {
        printf("%d是素数\n",m);
    }
    else
    {
        printf("%d不是素数\n",m);
    }
    return 0;
}
