/*
 * @Author: your name
 * @Date: 2021-09-03 22:33:27
 * @LastEditTime: 2021-09-05 15:26:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-5.c
 */
#include <stdio.h>
#include <math.h>

int main()
{
    //* 算术运算符
    int i = 1 + 1;
    int j = 1 + 1 * 2;
    int k = -1 + 2 * 3 + pow(i, j);
    printf("i = %d\nj = %d\nk = %d\n", i, j, k);

    //* 1+2.0 编译器会将占用坑位较小的那个操作数转换为较大的操作数数据类型
    //* 比如 int 会被转换为较大float浮点型 所以结果是浮点数
    //* %f代表单精度浮点型数据（float），%lf代表双精度浮点型数据（double）
    printf("整型输出:%d\n", 1 + 2.0); //! 会报错因为打印输出的方式是%d整型
    printf("整型输出:%lf\n", 1 + 2.0); //* 正常输出
    
    printf("整型输出:%d\n", 1 + (int)2.0);//* 强制转换，但不推荐
    printf("整型输出:%d\n", 1 + (int)1.8);//* 输出记过是 2 1.8直接把8舍去
    
    printf("浮点型输出:%f\n", 1.0 + 2.0); //* 正常输出

    return 0;
}
