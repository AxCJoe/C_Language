/*
 * @Author: your name
 * @Date: 2021-09-03 23:17:46
 * @LastEditTime: 2021-09-05 18:41:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t6.c
 */
#include <stdio.h>

//* <(С��)
//* <=(С�ڵ���)      ��Щ���ȼ���ͬ���ߣ�
//* >(����)
//* >=(���ڻ����)
//-------------------------------------
//* ==(����)         ��Щ���ȼ���ͬ���ͣ�
//* !=(������)
int main()
{
    //* ��ϵ��������ؽ������ 1 �� 0 Ҫô��Ҫô��
    int a = 5, b = 3;
    printf("%d\n", 1 < 2);
    printf("%d\n", a > b);
    printf("%d\n", a <= b + 1);
    printf("%d\n", 'a' + 'b' <= 'c');
    printf("%d\n", (a = 3) > (b = 5));

    //* ��Ŀ��������ȼ� ���ߣ�
    //* ˫Ŀ��������ȼ� ���ͣ�
    //* ! �߼��� ȡ��
    //* &&��ͬʱΪ�涼Ϊ�棩 ||����һ��Ϊ������棩  �߼������
    printf("\n%d\n", 3 > 1 && 1 < 2);
    printf("%d\n", 3 + 1 || 2 == 0);
    printf("%d\n", !(1 - 1));
    printf("%d\n", !0 + 1 < 1 || !(3 + 4));
    printf("%d\n", 'a' - 'b' && 'c');
    

    //* ��·��ֵ
    //* C���Զ��߼�����߼�����ö�·��ְ�ķ�ʽ��
    //* һ������ж��������� �Ͳ��ڼ���ִ��
    int x = 3, y = 6;

    (x = 0) && (y = 5);
    printf("x = %d y = %d\n", x, y); //* x = 0 y = 6
    (x= 1) || (y = 5);
    printf("x = %d y = %d\n", x, y); //* x = 1 y = 6 

    return 0;
}
