/*
 * @Author: your name
 * @Date: 2021-09-11 15:26:11
 * @LastEditTime: 2021-09-11 15:54:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t27.c
 */
#include <stdio.h>

int main()
{
    //* 指针
    //* 取地址运算符和取值运算符
    //* 如果需要获取某个变量的地址，可以使用取地址运算符(&)；
    char a = 'F';
    char *pa = &a;

    int f = 123;
    int *pb = &f;

    //* 如果需要访问指针变量指向的数据，可以使用取值运算符(*):
    printf("a = %c\nf = %d\n",*pa,*pb);

    *pa = 'C';
    *pb = 321;
    printf("a = %c\nb = %d\npa = %c\npb = %d\n",a,f,*pa,*pb);
    printf("\n");
    printf("sizeof a =  %d\n",sizeof(a));
    printf("sizeof pa = %d\n",sizeof(*pa));
    printf("sizeof f =  %d\n",sizeof(f));
    printf("sizeof pb = %d\n",sizeof(*pb));
    printf("\n");
    printf("内存地址 pa = %p\n",pa);
    printf("内存地址 pb = %p\n",pb);

    return 0;
}
