/*
 * @Author: your name
 * @Date: 2021-09-26 22:19:15
 * @LastEditTime: 2021-09-27 00:11:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t50.c
 */
//* 类型名 函数名(参数列表)
//* {
//*   函数体
//* }

//* 形参 形式参数的缩写
//* 实参 实际参数的缩写

//* 函数定义的时候 int sum(int x,int y) 就是形参 x y 也是站位符
//* 实参 int main() {sum(3,5); 这个sum就是实参}
//* 传真和传址

#include <stdio.h>

void swap(int x, int y);

void swap(int x, int y)
{
     printf("In swap,互换前: x = %d, y = %d\n",x,y);
     int temp;
     temp = x;
     x = y;
     y = temp;
     printf("In swap,互换后:x = %d, y = %d\n",x,y);
}

int main()
{
  
    int x = 3, y = 5;
    printf("In main,互换前: x = %d, y = %d\n",x,y);
    swap(x, y);
    printf("In main,互换后:x = %d, y = %d\n",x,y);
    return 0;
}
