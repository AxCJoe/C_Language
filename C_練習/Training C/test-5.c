/*
 * @Author: your name
 * @Date: 2021-09-03 22:33:27
 * @LastEditTime: 2021-09-05 15:26:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-5.c
 */
#include <stdio.h>
#include <math.h>

int main()
{
    //* ���������
    int i = 1 + 1;
    int j = 1 + 1 * 2;
    int k = -1 + 2 * 3 + pow(i, j);
    printf("i = %d\nj = %d\nk = %d\n", i, j, k);

    //* 1+2.0 �������Ὣռ�ÿ�λ��С���Ǹ�������ת��Ϊ�ϴ�Ĳ�������������
    //* ���� int �ᱻת��Ϊ�ϴ�float������ ���Խ���Ǹ�����
    //* %f�������ȸ��������ݣ�float����%lf����˫���ȸ��������ݣ�double��
    printf("�������:%d\n", 1 + 2.0); //! �ᱨ����Ϊ��ӡ����ķ�ʽ��%d����
    printf("�������:%lf\n", 1 + 2.0); //* �������
    
    printf("�������:%d\n", 1 + (int)2.0);//* ǿ��ת���������Ƽ�
    printf("�������:%d\n", 1 + (int)1.8);//* ����ǹ��� 2 1.8ֱ�Ӱ�8��ȥ
    
    printf("���������:%f\n", 1.0 + 2.0); //* �������

    return 0;
}
