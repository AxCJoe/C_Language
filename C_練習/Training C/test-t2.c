#include<stdio.h>


int main(){

   

    int i = 123;
    char j = 'C';
    float k = 3.14;

    printf("size of int is ：%d 字节\n",sizeof(int));
    printf("size of i is ：%d 字节\n",sizeof i);
    printf("size of char is ：%d 字节\n",sizeof(char));
    printf("size of j is ：%d 字节\n",sizeof(j));
    printf("size of float is ：%d字节\n",sizeof(float));
    printf("size of k is ：%d字节\n",sizeof k);
    
    //* sizeof 的使用 在结尾也可以 sizeof 变量名

    //* signed 带符号位可以存放负数 
    //* unsigned 不能存放负数 只能存放 正数或0
    //* 例如

    signed int ac = -1; //* 同理其他 常量也可以加
    unsigned int ab = -1; //* 只能存放 正数或0
    printf("ac = %d\n",ac);
    printf("ab = %u\n",ab); //* 无符号用%u
    //* cpu能读懂的最小单位 - bit ，b
    //* 内存机构的最小寻址单位 -- 字节，Byte，B
    //* 1Byte == 8bit
    //* 一个整型4个字节每个字节=8位  4*8bit = 32位 用二进制表达就是：32个1
    //* 规律就是2^n-1 2^32-1
    return 0; 
}
