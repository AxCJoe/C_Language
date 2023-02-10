/*
 * @Author: your name
 * @Date: 2021-09-10 08:14:21
 * @LastEditTime: 2021-09-10 08:29:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\sushu-3.c
 */

#include <stdio.h>
int main()
{
    int i, m;
    printf("请输入一个数: ");
    scanf("%d", &m);
    
    //* for循环的素数判断
    for (i = 2; i < m; i++)
    {
        if (m % i == 0)
            break;
        else
            ;
    }
    if (i == m)
    {
        printf("%d是素数\n", m);
    }
    else
    {
        printf("%d是不个素数\n", m);
    }
    return 0;
}
