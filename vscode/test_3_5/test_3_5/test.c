#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; ++i, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		
//		for (j = 0; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//十次循环
//	//十次打印
//	//十个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("haha\n");
//		printf("haha\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		//...
//		i++;//调整
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//int ch = 0;
//	//EOF - end of file -文件结束标志
//	//while ((ch = getchar()) != EOF)//crtl + z getchar就会接受到EOF的标志
//	//{
//	//	putchar(ch);
//	////}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码：>");
//	scanf("%s", &password);//输入密码，并存放在password数组中
//	printf("请确认(Y/N):>");
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}