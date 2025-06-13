#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", &password);
		if (strcmp(password , "123456") == 0)// ==不能用来比较两个字符串相等，应该使用一个库函数strcmp
		{
			printf("登入成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}

	return 0;
}
//int main()
//{
//	//welcome to bit!!!!!!!!
//	//######################
//	//w####################!
//	//we##################!!
//	//...
//	//welcome to bit!!!!!!!!
//	// 
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//	arr2[left] = arr1[left];
//	left++;
//	arr2[right] = arr1[right];
//	right--;
//	printf("%s\n",arr2);
//	Sleep(1000);
//	system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;//做下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = right - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = left + 1;
//		}
//		else
//		{
//			printf("找到了，下标是： %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}