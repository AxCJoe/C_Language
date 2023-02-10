/*
 * @Author: your name
 * @Date: 2021-09-16 16:06:35
 * @LastEditTime: 2021-09-16 16:15:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t48.c
 */
#include<stdio.h>

int sum(int n);
int sum(int n)
{
    int res = 0;

    do
    {
        res += n;
    } while (n-- > 0);
    
    return res;
}

int main()
{
    int num,res;
    printf("请输入n的值: ");
    scanf("%d",&num);
    res = sum(num);
    printf("1+2+3+....+(n-1)+n的结果是: %d\n",res);

}
