#include <stdio.h>
#define NAME "Joe is Jo"
int main()
{
    //* �ַ����ַ����Ĵ�ӡ
    //* return 0;��λ�÷ŵĲ��ԣ���Ӱ������������

    // * ASCII ��ĸ���������ͨ����ѯASCII���������ַ���
    char a = 'c';
    printf("%c = %d\n", a, a);

    char b = 70, c = 105, d = 115, e = 104, f = 67; //* char ���ֶ�Ӧ����ASCII��ÿ���ַ�
    printf("%c%c%c%c%c\n", b, c, d, e, f);          //* FashC

    unsigned char height = 180;
    printf("�����%d\n", height);
    

    //* �ַ�������#difine ������������
    char arr[] = "Jo is Joe";  //* �������\0 �ַ������Զ����
    printf("arr = %s\n", arr); //* �������
    printf("%s\n","Joe is Jo");//* �������
    printf("#difine = %s\n",NAME);

    puts(NAME);
    puts(arr); //* ֱ�����
    puts("Joe is Jo"); //* ֱ�����

    char arc[]={'Y','M','C','A','I','s','c','\0'}; //* �����ַ�����Ϊ��\0��0����������ȡ����������
    printf("arc = %s\n",arc);
    char are[]={'Y','M','C','A','I','s','o'};//* ��Ϊ��βû��0���Գ��������
    printf("are = %s\n",are);
    
    return 0;
}
