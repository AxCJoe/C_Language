#include<stdio.h>


int main(){

   

    int i = 123;
    char j = 'C';
    float k = 3.14;

    printf("size of int is ��%d �ֽ�\n",sizeof(int));
    printf("size of i is ��%d �ֽ�\n",sizeof i);
    printf("size of char is ��%d �ֽ�\n",sizeof(char));
    printf("size of j is ��%d �ֽ�\n",sizeof(j));
    printf("size of float is ��%d�ֽ�\n",sizeof(float));
    printf("size of k is ��%d�ֽ�\n",sizeof k);
    
    //* sizeof ��ʹ�� �ڽ�βҲ���� sizeof ������

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
    return 0; 
}
