#include<stdio.h>
#include<math.h>

int main(){

    //* signed ������λ���Դ�Ÿ��� 
    //* unsigned ���ܴ�Ÿ��� ֻ�ܴ�� ������0
    //* ����
    
    signed int ac = -1; //* ͬ������ ����Ҳ���Լ�
    unsigned int ab = -1; //* ֻ�ܴ�� ������0
    printf("ac = %d\n",ac);
    printf("ab = %u\n",ab); //* �޷�����%u

    //* cpu�ܶ�������С��λ - bit ��b
    //* �ڴ��������СѰַ��λ -- �ֽڣ�Byte��B
    //* 1Byte == 8bit
    //* һ������4���ֽ�ÿ���ֽ�=8λ  4*8bit = 32λ �ö����Ʊ����ǣ�32��1
    //* ���ɾ���2^n-1 2^32-1

    int ret = pow(2,31)-1; //* �������
    printf("ret = %d\n",ret); //* 

    int ret = pow(2,32)-1; //* ��2^32�ĺ��� pow
    printf("ret = %d\n",ret); //* overflow in conversion from ���
    
    unsigned int rep = pow(2,32)-1;
    printf("rep = %u\n",rep);
    return 0;
    //* 0������ ���������ֵ��������ֵ��Сֵ�� ���127 �� ��Сֵ ��-128
}
