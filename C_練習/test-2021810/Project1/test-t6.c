#include<stdio.h>


int main()

{
	extern int gg; //�мǼ���β���ı����ŵ���Ӣ���л�����
	//�����ⲿ��ȫ�ֱ�����test-t4��� gg��
	//��extern������entern�ⲿ���ŵ�

	printf("�ⲿȫ�ֵ���:%d\n",gg);

	return 0;
}