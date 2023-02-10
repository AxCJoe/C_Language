/*
 * @Author: your name
 * @Date: 2021-09-15 13:29:57
 * @LastEditTime: 2021-09-15 14:37:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-38.c
 */
#include <stdio.h>

int main()
{
    // //* 指向指针的指针
    // int num = 110;
    // int *p = &num;
    // int **pp = &p; //* 指向指针的指针

    // printf("num: %d\n",num);
    // printf("*p: %d\n",*p);
    // printf("**pp: %d\n",**pp);
    // printf("&p: %p\npp: %p\n",&p,pp);
    // printf("&num: %p\np: %p\n*pp: %p\n",&num,p,*pp);

    //* 指针数组和指向指针的指针
    char *books[] = {"《金刚经》","《心经》","《地藏经》","《忏悔录》"};
    char **byFishc;
    char **byJo[4];
    byFishc = &books[3];
    byJo[0] = &books[0];
    byJo[1] = &books[1]; 
    byJo[2] = &books[2]; 
    byJo[3] = &books[3];
       
    printf("众生喜欢的书籍有: %s\n",*byFishc);
    printf("我喜欢的书籍有:\n");

    int i;

    for(i = 0; i < 4; i++) 
    {
        printf("%s\n",*byJo[i]);
    }

    return 0;
}
