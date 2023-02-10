#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int Max(int x, int y)
//{
//
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		
//		return y;
//	}
//	
//}






//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}

//void test()
//{
//	//int a = 1;
//	//静态的局部变量 与上面语句不同 static 修饰局部变量，这个时候局部变量的生命周期边长了
//	//static 修饰全局变量，改变了变量的作用域 -- 让静态的全局变量只能在自己所在的原文件内部使用，出了原文件就没法再使用了
//	//static 修饰的函数 会改变函数的作用域 ，比如全局加入 static 就变成局部 而不是全局 -- 还是不够准确
//	//static修饰函数改变了函数的连接属性，全局没被修饰时有外部链接属性
//	//假设外部声明的函数已经建立（Add）用于相加的
//	//在main上面 加入 extern int Add(int,int); 这句话即可调用
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//
//}
//
//



////#define 定义的标识常量 
//#define max 100
//
//
////#define 可以定义宏-带参数
//
//#define add(x,y)(x>y?x:y) //三目操作符

struct Book
{
	char name[20];//C 语言程序设计
	short price;//55


};
int main()

{	
	
	//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	//改55的方式
	b1.price = 15;
	
	//操作name需要ctrcpy
	strcpy(b1.name,"C++"); //strcpy-string copy - 字符串拷贝 -- 这是一个库函数 -- 要引用string.h头文件 
	printf("现促销%s\n", b1.name);
	printf("现促销价:%d元\n", b1.price);
	//带指针的写法 利用pc打印价格或书名
	struct Book* pc = &b1;
	
	//符号 . 结构体变量成员 .成员
	//符号 -> 结构体指针 ->成员

	//第一种修改价格的方式 注意：一定要在指针名称加括
	(*pc).price = 60;
	//第一种输出方法
	printf("%s\n", (*pc).name);
	printf("%d\n", (*pc).price);

	//第二种修改价格的方式
	(pc)->price = 20;
	//第二种输出方法
	printf("%s\n", pc->name);
	printf("%d\n", pc->price);
	//结构体 描述一个复杂的属性
	//名字+身高+年龄+身份证号码+
	//书名+作者+出版社+定价+书号





	//复杂对象 -- 结构体 - 我们自己创造出来的一种类型
	//int a = 10;
	//int* p = &a;//取地址a  int*是p的类型
	////有一种变量是用来存放地址的指针变量
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//*p = 20;//解引用操作符
	//printf("a = %d\n", a);

	
	
	
	/*char ak = 'W';
	char* pc = &ak;
	*pc = 'G';
	printf("%d\n", sizeof(pc));
	printf("%c\n", ak);
	
	*/
	
	/*int a = max;
	int b = 20;
	int c = 30;
	int d = add(b, c);
	printf("%d\n", d);*/

	
	
	
	
	
	
	
	
	//int i = 0;
	//while (i<5)
	//{
	//	test();
	//	i++;
	//	// printf("%d\n", test); 这种输出的方式不对 ，test是不是变量 是函数
	//}
	
	
	
	
	
	//类型从定义 --typedef -- 类型定义 
	//比如：
	//typedef unsigned int u_intl; //unsigned是无符号，signed是有符号 而且signed int 如 auto 
	//unsigned int num1 = 20;
	//u_int num2 = 20; //跟上面的代码功能一样
	
	
	//对于寄存器 register的使用
	// 如果一个局部变量经常被使用 那么可以用register
	// register int a = 10; //建议有必要的， 把a定义为寄存器变量 ，否则都用寄存器容易变慢
	
	//局部变量一般都有一个 auto 只不过大家都省略不写
	//auto int a = 10; //局部变量 -- 自动变量





	//关于 原码 -- 反码 -- 补码 
	//只要是整数，内存中存储的都是二进制的补码
	//正数 -- 原码,反码，补码 相同 
	//负数 -- 存放的是补码
	//原码 -> 反码 -> 补码 
	//原码 -- 是直接按照正负写出的二进制序列
	//反码 -- 原码的符号位不变，其他位取反得到的
	//补码 -- 反码+1得到的
	//举例：-2 
	//1000000000000000000010 原码
	//1111111111111111111101 反码 第一个符号位不变，其他位按位取反
	//1111111111111111111110 补码 =  反码+1 结尾处+1 便10

	//int arr[10] = { 0 };
	//arr[4];//[] - 下标引用操作符 能访问一个元素
	
	
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b); //（）--函数调用操作符
	//printf("%d\n", sum);
	//
	
	
	
	//int a = 10;
	//int b = 20;
	//int max;
	//max = (a > b ? a : b);
	//printf("%d\n", max);  //输出为20




	////强制类型转换
	//int a = (int)3.14; 
	//printf("%d\n", a);
    //逻辑与 && 两个都为真才是真 否则一个有假都为假
 	//逻辑或 || 有一个为真都为真 若两个都为假才是假
	
	
	//int a = 10;
	//int b = a++; //后置++ 先使用在 ++
	//int c = ++b; //前置++ 先++  后使用
	/*int a = 10;
	int b = a--;
	printf("%d\n%d\n",a,b);*/



	//int a = 0; //4个字节，32bit 位
	//int b = ~a; //这里的b是有符号的整型
	////按位取反 （二进制位）
	////1010  按位取反 后 是 0101 
	////输出-1  
	////原码 ，反码，补码
	////负数在内存中存储的时候，存储的是二进制的补码
	//// 原 反 补的计算规则 
	////如果是个补码的话  原码符号位不变 得到反码 反码+1得到补码
	////倒回来 补码-1 得到反码  反码按位取反得到原码
	////假设 补码 11111111111111111111
	////补码 -1  11111111111111111110
	////取反得原码 第一位不变 其他位取反 10000000000000001
	//printf("%d\n", b);//使用打印的是这个数的原码
	
	
	
	
	/*int num1 = 10; 
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d\n",max);*/

	
	////两个值得比较
	//int num1 = 10;
	//int num2 = 20;
	//if (num1 > num2)
	//{
	//	printf("较大值是：num1\t%d\n", num1);
	//}
	//else 
	//{
	//	printf("较大值是：num2\t%d\n",num2);
	//}
	
	
	//关于字符串的结束标志：'\0'
	//“abcdef”;如果是字符串的话他的末尾是有\0的
	//也就是说'\0'是-转义字符-0
	//0->是数字
	//'0'是字符数字 - ASCII码是48 
	//EOF - end of file - 文件结束标志 -1
	//
	//int arr[10] = { 0 };//10个整型元素的数组
	//int sz = 0;
	//printf("%d\n",sizeof(arr));
	//sz = sizeof(arr)/sizeof(arr[0]);
	//printf("%d\n",sz);
	
	//int a = 10;
	////sizof 计算的是变量/类型所占空间的大小
	//printf("%d\n", sizeof(a)); //4 个字节
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a); //这种写法只能操作变量	
	////printf("%d\n", sizeof int); 这种写法就不行 
	////// int arr[] = {1,2,3,4,5,6}; 
	////// printf("%d\n",sizof(arr)); //计算数组大小，单位是字节 6数组*4字节 = 24个字节 int[6]是这个数组的类型

	//
	////C语言中我们表示真假 0 -- 就是假  非0 -- 就是真
	//int a = 10;
	//printf("%d\n", a);
	//printf("%d\n", !a); // 输出是 0
	//printf("%d\n", !!a); // 输出是 1
	
	//int a = 10;
	//a = 20; //=赋值  == 判断相等
	//a = a + 10; //1  1,2这两种写完完全可以
	//a += 10; //2   
	//a -= 20;
	//a &= 20;
	//复合赋值符
	
	//& 按位与
	//| 按位或
	//^ 按位亦或
	
	
	
	
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0;
	//while(i < 10)
	//{
	//	printf("%d", arr[i]);
	//	i++;
	//
	//}

	
	return 0;
}



//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = add(a, b);
//	printf("sum:%d", sum);
//
//	return 0;
//}
//
//



//
//add(int x, int y) //属于自定义函数，括号里是函数的参数
//{
//	   
//	int z = x + y; //这里面是函数体
//	return z;
//}
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = add(a,b);//Add函数调用 ，需要设置函数
//	printf("sum = %d\n",sum);// printf scanf 属于库函数
//
//
//	return 0;
//}