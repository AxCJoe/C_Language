/*
 * @Author: your name
 * @Date: 2021-09-16 14:57:35
 * @LastEditTime: 2021-09-16 15:18:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t46.c
 */
#include <stdio.h>

int main()

{
    //* 指向常量的常量指针
    int num = 110;
    const int cnum = 120;
    const int * const p = &num;
    const int * const *pp = &p;

    printf("pp: %p\n&p:%p\n",pp,&p);
    printf("*pp: %p\np:%p\n&num:%p\n",*pp,p,&num);
    printf("*pp: %p\np:%p\n&num:%p\n",*pp,p,&num);
    printf("**pp: %d\n*p:%d\n",**pp,*p);
    printf("num: %d\n&num:%p\n",num,&num);

    return 0;
}
