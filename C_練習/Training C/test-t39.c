/*
 * @Author: your name
 * @Date: 2021-09-15 14:17:32
 * @LastEditTime: 2021-09-15 14:47:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t39.c
 */

#include <stdio.h>

int main()
{

    //* 指针数组和指向指针的指针
    char *books[] = {"《忏悔录》", "《金刚经》", "《心经》", "《地藏经》", "《道德经》"};
    char **byFF;
    char **byJo[5];
    byFF = &books[4];
    byJo[0] = &books[0];
    byJo[1] = &books[1];
    byJo[2] = &books[2];
    byJo[3] = &books[3];
    byJo[4] = &books[4];

    printf("众生喜欢的书籍有: %s\n", *byFF);
    printf("我喜欢的书籍有:\n");

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", *byJo[i]);
    }
    /*
    * 至少有两个好处：
    * 避免重复分配内存
    * 只需要进行一处修改
    */
    //* 代码的灵活性和安全性都有了显著的提高！
    return 0;
}
