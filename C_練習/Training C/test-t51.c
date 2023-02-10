/*
 * @Author: your name
 * @Date: 2021-09-27 00:14:41
 * @LastEditTime: 2021-09-27 00:21:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t51.c
 */

//* 指针
//* 指针可以解决函数互换后传回给main里还是原来的数值

#include <stdio.h>

void swap(int *x, int *y);

void swap(int *x, int *y)
{
     printf("In swap,互换前:x = %d, y = %d\n",*x,*y);
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
     printf("In swap,互换后:x = %d, y = %d\n",*x,*y);
}

int main()
{
  
    int x = 3, y = 5;
    printf("In main,互换前:x = %d, y = %d\n",x,y);
    swap(&x, &y); //* 指针必须存放地址
    printf("In main,互换后:x = %d, y = %d\n",x,y);
    return 0;
}
