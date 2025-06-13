#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;

}
//int main()
//{
//	int b = 10;//申请4个字节
//	//&a;//取地址
//	int* p = &b;
//	printf("%p\n", &b);
//	printf("%p\n", p);
//	*p = 20;//* - 解引用操作符
//	printf("b = %d\n", b);
//	//有一种变量就是用来存放地址的变量 - 指针变量
//	//printf("%p\n", &a);
//	return 0;
//}


//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏 - 带参数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//定义宏
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//
//}
//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就不能使用了
//static修饰函数
//也是改变了函数的作用域 - 不准确
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性

//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
////int main()
//{
//	//extern - 申明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);//2,3,4,5,6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main() 
//{
//	//int float;//error
//	//typedef - 类型定义 - 类型重定义
//	//张三  -- 小三  -- 别名
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	return 0;
//}
//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 1;
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	return 0;
//}


//
//int main()
//{
//	int a = 10;//局部变量 - 自动变量
//	return 0;
//}

//
// 有符号数
// 
// 只要是整数，内存中存储的都是二进制的补码
// 正数--原码，反码，补码 相同
// 负数：
// 原码      -->                   反码                  -->         补码
// 直接按照正负					原码符号位不变其他					反码+1
// 写出二进制序列				符号位不变	
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//() -- 函数调用操作符
//	return 0;
//
//}
//& * . ->

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//条件操作符（三目操作符）exp1 ？ exp2 : exp3
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//	return 0;
//
//}


//int main()
//{
//	//真  - 非0
//	//假  -  0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 0;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}


//
//int main()
//{
//	int a = 3.14;//double -> int 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++.先使用，在++
//	int b = ++a;//前置++，先++，再使用
//	printf("a = %d b = %d\n", a, b);//11, 11
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//~按（2进制位）位取反
//	//000000000000000000000000000000
//	//111111111111111111111111111111 
//	//原码，反码，补码
//	// 原码除了符号位其他的按位取反 ->反码+1 ->补码
//	// 原码 <- 反码除了符号位按位取反 <- 补码-1
//	//负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);//使用的，打印的的是这个数的原码
//	return 0;
//	
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main() 
//{
//	//字符串的结束标志;'\0'
//	// 'abcdef\0'
//	//'\0'
//	//'\0' - 转义字符 - 0
//	//0 - > 数字0
//	//'0' -> 48
//	//'a' 'b' 'c' '0' '1' '2'
//	// EOF -> end of file - 文件结束标志 -1
//
//}