/*
 * @Author: your name
 * @Date: 2021-09-10 16:58:29
 * @LastEditTime: 2021-09-10 18:10:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t18.c
 */

#include <stdio.h>

int main()

{
    //* 算术运算符
    /*
    * a = a + 1   a += 1
    * a = a - 2   a -= 2
    * a = a * 3   a *= 3
    * a = a / 4   a /= 4
    * a = a % 5   a %= 5
    * 
    * i = i + 1   i++ 或 ++i
    * i = i - 1   i-- 或 --i
    * a = 3, 5    a = 3; 5;
    */
    int i = 5, j;
    j = ++i;
    printf("i = %d,j = %d\n", i, j);

    i = 5;
    j = i++;                          //* 优先级原因，先赋值后计算。
    printf("i = %d, j = %d\n", i, j); //* j = 5 i = 6
    
    int b,c;
    int a = (b = 3, (c = b + 4) + 5);
    printf("a = %d b = %d c = %d",a,b,c); 
    return 0;
}
