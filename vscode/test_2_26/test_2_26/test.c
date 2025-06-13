#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
	int arr[30] = { 0 };
	printf("%d\n", sizeof(arr));
	//int a = 10;
	////sizeof 计算变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);
	//printf("%d\n", sizeof(int));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}
//int main() 
//{
//	//单目操作符
//	//双目操作符
//	// 三目操作符
//	//int a = 0;
//	//int b = 10;
//	//a + b;//+ 双目操作符
//	//c语言中我们表示真假
//	//0 - 假
//	//1 - 真
//
//	int a = -2;
//	int b = -a;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//
//}

	
////int main()
//{
//	int a = 10;
//	a = 20;//= 赋值    == 判断相等
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 10;
//	a -= 10;
//	a = a & 10;
//	a &= 10;
//	//复合赋值符
//	//+= -= *= /= %= >>= <<= &= ^= |=
//	return 0;
//}
//int main()
//{
//	//（2进制）位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	int a = 3;
//	int b = 5;
//	int c = a^b;//不是次方 - 是异或
//	//异或的计算规律
//	// 对应的二进制位相同，则为0
//	// 对应的二进制位相异，则为1
//	//011
//	//101
//	//110
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//移（2进制）位操作符
//	//<< 左移
//	//>> 右移
//	int a = 1;
//	//整形占4个字节--32bit位
//	//00000000000000000000000000000001
//	int b = a <<2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//取模
//	printf("%d\n", a);
//	return 0;
//}
//


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//int e = 5;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[5]);
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	scanf_s("%d%d", &num1, &num2);
//	int a = 100;
//	int b = 200;
//	sum = Add(num1,num2);
//	sum = Add(a,b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//函数
//f(x) = 2*x+1

//
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000) {
//		printf("敲一行代码: %d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//	return 0;
//}
////int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("给你一个好offer");
//	}
//	else {
//		printf("放弃，回家卖红薯");
//	}
//	return 0;
//}
//
//
//
//



//
//int main()
//{
//	printf("%c\n", '\x61');
//
//	///*printf("%d\n", strlen("c:\test\32\test.c"));*/
//	//\32 - 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ascii码值，对应的字符
//	///*printf("%c\n", '\132');*/
//	return 0;
//}
//
//



//int main()
//{
//	printf("D:\\code\\vs\\test_2_26\\test.c\n");
//	//\?
//	printf("%c\n", '\'');
//	//\t - 水平制表符
//	return 0;
//}

//int main()
//{
//	printf("abc\n");
//		return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}
//int main() 
//{
//	char arr1[] = "abc";
//	//"abc" -- 'a','b','c','\0'--'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c','\0'};
//	//'\0' -0
//	//'a' - 97
//	//'b' - 98
//	//'A' - 65
//	//...
//	//ASCII码值
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
// int float 
// char
// 字符串类型
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";
//	return 0;
//}


//int main()
//{
//	const int n = 0;//n是一个变量，但是又有常数的性质，所有我们说n是常变量
//	/*int arr[n] = { 0 };*/
//
//
//
//
//	//const - 常属性
//	//const修饰的常变量
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 6;
//	//printf("%d\n", num);
//	//	//字面常量
//	//	//3;
//	//	//5;
//		//6;
//		return 0;
//}
#define MAX 10
//#define 定义的标识符常量

//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//
//枚举常量
//枚举-一一列举
//
//性别：男，女，保密
//三原色：红，蓝，绿
//星期：1，2，3，4，5，6，7


//枚举关键字 - enum
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//YELLOW = 6;枚举常量的值是不可以改变的
//	return 0;
//}
//// 
////enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//MALE FAMALE SECRET - 枚举常量
//int main()
//{
//	/*enum Sex s = FEMALE;*/
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//





