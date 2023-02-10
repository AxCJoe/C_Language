#include<stdio.h>
#include<math.h>

int main(){

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

    int ret = pow(2,31)-1; //* 正常输出
    printf("ret = %d\n",ret); //* 

    int ret = pow(2,32)-1; //* 求2^32的函数 pow
    printf("ret = %d\n",ret); //* overflow in conversion from 溢出
    
    unsigned int rep = pow(2,32)-1;
    printf("rep = %u\n",rep);
    return 0;
    //* 0算正数 所以在最大值里比如最大值最小值里 最大到127 而 最小值 到-128
}
