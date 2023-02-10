/*
 * @Author: your name
 * @Date: 2021-09-10 20:27:05
 * @LastEditTime: 2021-09-10 21:18:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-25.c
 */

#include<stdio.h>
#include<string.h>
int main()

{
    //* 字符串处理函数
    
    char str[] = "abcd";
    char str1[] = "efgh";
    char str2[] = "to be or not to be";
    char str3[100];
    char str4[] = "hhhhh";
    printf("str = %c\n",str[0]);

    //* 获取字符串长度 sizeof strlen
    printf("sizeof str = %d\n",sizeof(str));
    //* %u 无符号10进制整数
    printf("strlen str = %u\n",strlen(str));  

    //* 拷贝字符串:strcpy 和 strncpy
    strcpy(str,str1);//* 要注意源字符串的长度 大拷贝到小会溢出
    strcpy(str3,"Copy Successful");
    printf("str = %s\nstr1 = %s\nstr3 = %s\n",str,str1,str3);
      
    //* strncpy 拷贝字符串
    strncpy(str3,str2,6);
    //* 需要自己追加 '\0' 否则会不断的读下去
    str3[6] = '\0'; 
    printf("str3 = %s\n",str3);

    //* strcat 字符串连接
    strcat(str1," ");
    strcat(str1,str4);
    //* 连接后自动追加 '\0'
    printf("str1 = %s\n",str1);

    //* strcmp和strncmp 比较字符串
    if (!strcmp(str1,str2)) 
    {
        printf("两个数组中的字符串完全一致！\n");
    }
    else
    {
        printf("两个数组中的字符串存在差异！\n");
    }

    return 0;

}
