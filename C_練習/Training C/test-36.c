/*
 * @Author: your name
 * @Date: 2021-09-13 23:30:09
 * @LastEditTime: 2021-09-14 19:50:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-36.c
 */

#include<stdio.h>

int main()

{
    //* void(无类型) 指针
    //* 比如 void a; 但只这么写编译器会报错

    //* 关于void指针，它可以称之为通用指针，就是可以指向任意类型的数据.
    //* 也就是说，任何类型的指针都可以赋值给void指针。

    int num = 1024;
    int *pi = &num;
    char *ps = "abcd";
    void *pv;  //* 这里用void

    pv = pi;
    printf("pi:%p\npv:%p\n",pi,pv);
    printf("pi = %d\n",*pi); 
    printf("pv = %d\n",pv); 
    printf("pv = %d\n",*(int *)pv);

    pv = ps;
    printf("ps:%p\npv:%p\n",ps,pv);
    printf("pv = %s",pv);
    printf("pv = %s",(char *)pv);
    return 0;
}
