/*
 * @Author: your name
 * @Date: 2021-09-02 16:48:56
 * @LastEditTime: 2021-09-05 19:15:00
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \VSocde C\Training C\1\test-t.c
 */
#include <stdio.h>

//*  ���ͳ����� 520,110,123
//*  ʵ�ͳ�����3.14,5.12,8.87
//*  �ַ�������
//*  -��ͨ�ַ�:'L'.'b','a'����K��
//*  -ת���ַ���'\n'(����),'\t'(Tab),'\b'(�˸�)
//*  �ַ�������"Flash"
//*  ���ų�����ʹ��֮ǰ�����ȶ���

//*  ��ʽ��#define ��ʶ�� ����
//*  ���磺#define URL ��www.google.com��
//*       #define NAME ��Jo = �족
//*       #define YEAR 2021
//*       #define MONTH 5
//*       #define DAY 20

//*  �ַ������ַ���������� \0 ��Ϊ������

#define NAME "Jo"
#define YEAR 1989
#define MONTH 9 //* �ַ���09�ǿ��ԣ��������͵Ļ�����Ҫд9
#define DAY 12

int main()
{

	printf("����%s��������%d��,%d��,%d��\n", NAME, YEAR, MONTH, DAY);
	return 0;
}
