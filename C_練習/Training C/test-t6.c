/*
 * @Author: your name
 * @Date: 2021-09-03 23:17:46
 * @LastEditTime: 2021-09-05 18:41:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t6.c
 */
#include <stdio.h>

//* <(小于)
//* <=(小于等于)      这些优先级相同（高）
//* >(大于)
//* >=(大于或等于)
//-------------------------------------
//* ==(等于)         这些优先级相同（低）
//* !=(不等于)
int main()
{
    //* 关系运算符返回结果基本 1 和 0 要么真要么假
    int a = 5, b = 3;
    printf("%d\n", 1 < 2);
    printf("%d\n", a > b);
    printf("%d\n", a <= b + 1);
    printf("%d\n", 'a' + 'b' <= 'c');
    printf("%d\n", (a = 3) > (b = 5));

    //* 单目运算符优先级 （高）
    //* 双目运算符优先级 （低）
    //* ! 逻辑非 取反
    //* &&（同时为真都为真） ||（有一个为真就是真）  逻辑（与或）
    printf("\n%d\n", 3 > 1 && 1 < 2);
    printf("%d\n", 3 + 1 || 2 == 0);
    printf("%d\n", !(1 - 1));
    printf("%d\n", !0 + 1 < 1 || !(3 + 4));
    printf("%d\n", 'a' - 'b' && 'c');
    

    //* 短路求值
    //* C语言对逻辑与和逻辑或采用短路求职的方式；
    //* 一旦左边判断条件成立 就不在继续执行
    int x = 3, y = 6;

    (x = 0) && (y = 5);
    printf("x = %d y = %d\n", x, y); //* x = 0 y = 6
    (x= 1) || (y = 5);
    printf("x = %d y = %d\n", x, y); //* x = 1 y = 6 

    return 0;
}
