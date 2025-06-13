#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//	char arr1[] = "bit";
//	char arr2[] = "#####";//被指向的目的地的长度 要比源头的更加大
//				 //bit\0#\0	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory - 内存 - set - 设置



//int main()
//{
//
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	//***** world
//	return 0;
//}


int get_max(int x,int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int a = 0;
	int b = 20;
	//函数的使用
	int ret = get_max(a,b);
	printf("max = %d\n", ret);
	return 0;
}

