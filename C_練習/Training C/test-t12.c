/*
 * @Author: your name
 * @Date: 2021-09-06 23:57:05
 * @LastEditTime: 2021-09-07 16:35:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t12.c
 */

#include <stdio.h>

int main()

{
    /*
    * do 
    * 循环体
    * while(表达式); //要有分号结束
    */
    int i = 1;
    int sum = 0;
    do
    {
        sum = sum + i;
        i = i + 1;

    } while (i <= 100);
    printf("sum = %d\ni = %d\n",sum,i);

   
    // char input;
    // char password = "a123";
    // do
    // {
    //    printf("请输入密码:"); 
    //    scanf("%s",&input);
    //    //rewind(stdin);
        
    // } while (input != password);
    // printf("输入正确\n"); 
    

    return 0;
}
