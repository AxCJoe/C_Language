#include <stdio.h>
#define NAME "Joe is Jo"
int main()
{
    //* 字符与字符串的打印
    //* return 0;的位置放的不对，会影响程序的输出结果

    // * ASCII 码的概念，计算机是通过查询ASCII码来定义字符的
    char a = 'c';
    printf("%c = %d\n", a, a);

    char b = 70, c = 105, d = 115, e = 104, f = 67; //* char 数字对应的是ASCII里每个字符
    printf("%c%c%c%c%c\n", b, c, d, e, f);          //* FashC

    unsigned char height = 180;
    printf("身高是%d\n", height);
    

    //* 字符串除了#difine 还可以用数组
    char arr[] = "Jo is Joe";  //* 不用添加\0 字符串会自动添加
    printf("arr = %s\n", arr); //* 变量输出
    printf("%s\n","Joe is Jo");//* 变量输出
    printf("#difine = %s\n",NAME);

    puts(NAME);
    puts(arr); //* 直接输出
    puts("Joe is Jo"); //* 直接输出

    char arc[]={'Y','M','C','A','I','s','c','\0'}; //* 这组字符串因为有\0或0所以正常读取不会出现随机
    printf("arc = %s\n",arc);
    char are[]={'Y','M','C','A','I','s','o'};//* 因为结尾没有0所以出现随机数
    printf("are = %s\n",are);
    
    return 0;
}
