#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");//strcopy - string copy - 字符串拷贝 - 库函数 - string.h
	 struct Book*pb = &b1;
	//.     结构体变量.成员
	//->    结构体指针->成员
	printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb). price);
	//printf("书名: %s\n", b1.name);
	//printf("价格: %d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);
	return 0;
}
//int main()
//{
//	//结构体
//	//char int double 
//	//人 = 
//	//’w'
//	//书 -复杂对象
//	// 名字+身高+年龄+身份证号
//	// 书名+作者+出版色+定价
//	// 复杂对象 —创建出来的一种类型
//	//
//
//
//	
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(int*));*/
//	//double d = 3.14;
//	//double* pd = &d;//32 - 4, 64 - 8
//	//*pd = 3.3;
//	//printf("%d\n", sizeof(pd));
//	/*printf("%lf\n", d);
//	printf("%lf\n", *pd);*/
//	//int a = 10;//申请了4个字节的空间
//	//int* p = &a;//p是一个变量 - 指针变量
//	//*p = 20;//* - 解引用操作符/间接访问操作符
//	////printf("%p\n", p);
//	//printf("%d\n", a);
//	return 0;
//}