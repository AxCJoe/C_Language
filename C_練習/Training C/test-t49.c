/*
 * @Author: your name
 * @Date: 2021-09-16 16:15:21
 * @LastEditTime: 2021-09-16 16:32:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t49.c
 */
#include <stdio.h>

int MAX(int, int);

int MAX(int n, int i)
{
    int c;
    c = n > i ? n : i;
    return c;
    // if(n>i) 
    // {
    //     printf("你好");
    //     return n;

    // }
        
    // else
    // {
    //     return i;
    // }
        

}

int main()
{
    int a,b,c;
    printf("请输入两个对比值:");
    scanf("%d%d",&a,&b); 
    c = MAX(a,b);
    printf("最大值是:%d",c);

    return 0;
}
