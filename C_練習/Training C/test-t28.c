/*
 * @Author: your name
 * @Date: 2021-09-11 20:30:33
 * @LastEditTime: 2021-09-11 22:14:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t28.c
 */
#include <stdio.h>

int main()
{
    //* 指针与数组
    int a;
    int *p = &a;
    printf("请输入一个整数:");
    scanf("%d", &a);
    printf("a = %d\n", a);
    printf("请重新输入一个整数:");
    scanf("%d", p);
    printf("p = %d\n", *p);

    //* 数组自带下标为0的取地址
    char str[100];
    printf("请输入字符串:");
    scanf("%s", str);

    printf("您输入的字符串是:%s\n", str);
    printf("str数组的地址是:%p\n", str);

    //* 数组在打印地址的时候一定要有取地址
    printf("str第一个数组的地址是:%p\n", &str[0]);

    char x[] = "abcd";
    int b[5] = {1, 2, 3, 4, 5};
    float c[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("\nx[0] -> %p\nx[1] -> %p\nx[2] -> %p\n",&x[0],&x[1],&x[2]);
    printf("b[0] -> %p\nb[1] -> %p\nb[2] -> %p\n",&b[0],&b[1],&b[2]);
    printf("c[0] -> %p\nc[1] -> %p\nc[2] -> %p\n",&c[0],&c[1],&c[2]);
    printf("d[0] -> %p\nd1[1] -> %p\nd[2] -> %p\n",&c[0],&c[1],&c[2]);

    //* 指针指向数组
    //* char *p;
    //* p = a;
    //* p = &a[0];
    char *k = x;
    int *y = b;
    printf("*k = %c\n*(k+1) = %c\n*(k+2) = %c\n",*k,*(k+1),*(k+2));
    printf("*y = %d\n*(y+1) = %d\n*(y+2) = %d\n",*y,*(y+1),*(y+2));
    
    //* .2f 只保留2位
    printf("*c = %.2f\n*(c+1) = %.2f\n*(c+2) = %.2f\n"1,*c,*(c+1),*(c+2));

    return 0;
}
