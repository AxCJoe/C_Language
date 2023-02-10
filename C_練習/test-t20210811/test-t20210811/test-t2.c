//#define _CRT_SECURE_NO_WARNINGS 1.
//
//#include<stdio.h>
//
////4.枚举常量
////枚举-一一列举
////
////性别：男，女，保密
////三原色：红，黄，蓝
////星期：1,2,3,4,5,6,7
//
////枚举关键字 - enum
//
//enum Color 
//{
//	RED,
//	YELLO,
//	BLUE,
//
//};
//
//enum Sex //枚举常量
//
//{
//	MALE,
//	FEMALE,
//	SECRET,
//
//};
//
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLO;
//	//color = 6; //大括号给与定义的枚举常量是不可以更改的，但是枚举类型所创建的变量是可以改的
//	
//	
//	
//	enum Sex s = MALE;
//	enum Sex e = FEMALE;
//	printf("%d\n", s); // %c 打印不出来是出错的，%d的话是检查了enum对应的常量顺序值比如这里输出结果是0
//	printf("%d\n", e); //这里输出结果是1
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//
//
//
//
////3. #define 定义的标识符常量
////
////#define MAX 10  //定义 define时不需要再结尾用 ；号结束
////
////int main()
////
////{
////	int arr[MAX]= { 0 }; //这个就可以 { 0 } 初始化数据
////	printf("%d\n", MAX);
////
////
////	return 0;
////}