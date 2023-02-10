/*
 * @Author: your name
 * @Date: 2021-09-16 13:49:07
 * @LastEditTime: 2021-09-16 14:43:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t43.c
 */

#include <stdio.h>

int main()

{
    int num = 110;
    const cnum = 200;
    const *pc = &cnum;

    printf("cnum: %d\n&cnum: %p\n",cnum,&cnum);
    printf("*pc: %d\npc: %p\n",*pc,pc);

    pc = &num;
    printf("num: %d\n&num: %p\n",num,&num);
    printf("*pc: %d\npc: %p\n",*pc,pc);  
    num = 1024;
    
    return 0;
}
