/*
 * @Author: your name
 * @Date: 2021-09-08 09:44:38
 * @LastEditTime: 2021-09-08 15:24:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t14.c
 */

#include <stdio.h>

int main()

{
    
    //* _Bool flag = 1; 布尔类型 C99
    /*
    * _Bool a = 1;
    * _Bool b = 2;    / 使用非零值，b的值为1 /  
    * _Bool c = 0;
    * _Bool d = -1;   / 使用非零值，d的值为1 / 
    * 
    * a==1,
    * b==1,
    * c==0,
    * d==1,
    */
    // int i, num;
    // int flag = 1;
    // printf("请输入一个函数:");
    // scanf("%d", &num);
    // //* _Bool flag = 1; 布尔类型 C99

    // for (i = 2; i < num / 2; i++)
    // {
    //     printf("i = %d num = %d\n",i,num);
    //     if (num % i == 0)
    //     {
    //         flag = 0;
    //     }
    // }
    // if (flag == 1)
    // {
    //     printf("%d是一个素数！\n", num);
    // }
    // else
    // {
    //     printf("%d不是一个素数！\n", num);
    // }

    long long x, y;
    int fla = 1;
    printf("2:请输入一个函数:");
    scanf("%d", &y);
    //* _Bool flag = 1; 布尔类型 C99

    for (x = 2; x <= y / 2; x++)
    {
        printf("x = %d y = %d\n",x,y);
        if (y % x == 0)
        {
            fla = 0;
            break;
        }
    }
    if (fla)
    {
        printf("%d是一个素数！\n", y);
    }
    else
    {
        printf("%d不是一个素数！\n", y);
    }

    return 0;
}
