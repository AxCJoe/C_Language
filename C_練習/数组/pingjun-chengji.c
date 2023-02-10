/*
 * @Author: your name
 * @Date: 2021-09-10 18:52:18
 * @LastEditTime: 2021-09-10 19:04:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t22.c
 */

#include <stdio.h>

#define NUM 10

int main()
{
    int a[NUM];
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("请输入第%i位同学的成绩:",i + 1); //* %i %d 是一样的
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("成绩录入完毕，这次考试的平均分是:%.2f\n", (double)sum / NUM);

    return 0;
}
