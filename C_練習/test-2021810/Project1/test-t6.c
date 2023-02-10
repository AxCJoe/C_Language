#include<stdio.h>


int main()

{
	extern int gg; //切记检查结尾处的标点符号的中英文切换问题
	//调用外部的全局变量（test-t4里的 gg）
	//用extern，声明entern外部符号的

	printf("外部全局调用:%d\n",gg);

	return 0;
}