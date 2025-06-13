#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int global = 2013;
void test()
{
	printf("%d\n", global);
}
int main()
{

	int num = 0;
		

	printf("num = %d\n", num);
	return 0;

}

//int main()
//{
//	//计算2个的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用一个输入函数
//	scanf_s("%d%d",&num1, &num2);//取地址符&
//	
//	//C语言语法规定，变量要定义到当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	printf("%d\n",a);
//	return 0;
//}



//int num2 = 10;//全局变量
//int num1 = 300;
//int main()
//{
//	int num1 = 10;//局部变量
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", num1);
//	return 0;
//}
//
//



//int main()
//{
//	short age = 20;//向内存申请了2个字节
//	float weight = 95.6;//向内存申请了8个字节
//	return 0;

//}





//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//	return 0;
//}
//
//




//char - 字符类型
// 
//int main()
//{
//	//char ch = 'A';//内存
//	//printf("%c\n", ch);//%c-打印一个字符型的数据
//	//20
//	//int age = 20;
//	//printf("%d\n", age);//%d-打印一个整形十进制数据
//	//long 长整型
//	/*long num = 100;
//	printf("%d\n", num);*/
//	//float f = 5.0;
//	//printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
////包含一个stdio.h的文件
////std-标准 standard input output
////
//#include <stdio.h>
//
//int main()//主函数-程序的入口-main函数有且只有一个
//{	
//	//在这里完成任务
//	//在屏幕上打印hello world
//	//函数printf function - printf - 打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//用的别人的东西-打招呼
//	//#include
//	printf("hello 比特\n");
//	return 0;
//}
//
////int 是整形的意思
////mian前面的int表示main函数调用一个返回一个整数值
//int main()
//{
//
//	return 0;
//}
//
////这种写法已经过时了
//void main()
//{
//	return 0;
//}