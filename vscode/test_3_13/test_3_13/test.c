#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ��������й�
//	char arr1[] = "bit";
//	char arr2[] = "#####";//��ָ���Ŀ�ĵصĳ��� Ҫ��Դͷ�ĸ��Ӵ�
//				 //bit\0#\0	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory - �ڴ� - set - ����



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
	//������ʹ��
	int ret = get_max(a,b);
	printf("max = %d\n", ret);
	return 0;
}

