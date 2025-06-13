#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//int main()
//{
//
//	return 0;
//}

int main()
{
	//shutdown -s -t
	char input[20] = { 0 };
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("请注意，你的电脑在一分钟内关机，如果输入：“我是猪”，就取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//比较两个字符串strcmp()
		{
		system("shutdown -a");
		break;
		}
	}
	
	//else
	//{
	//	goto again;
	//}
	return 0;
}

//int main()
//{
//again:
//	printf("hello bit!");
//	goto again;
//	return 0;
//}

//void menu()
//{
//	printf("****************************\n");
//	printf("****	1.play	0.exit	****\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置
//	//time
//	ret = rand()%100+1;//生成随机数1-100
//	//
//	// printf("%d\n", ret);
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		if (guess == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误,请重新输入:\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//




////在屏幕上输出一个9*9乘法口诀表
////1*1
////2*1=2 2*2=4
////3*1=3 3*2=6 3*3=9
////...
//int main()
//{
//	//确定打印9行
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count = %d",count);
//	return 0;
//}
//int main()
//{
//	int i =0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//试除法
//		//产生2到i-1的数
//		int j = 0;
//		for (j = 2; j <=sqrt(i) ; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("素数的个数有： %d", count);
//	return 0;
//}
//素数求解的n种境界
//





//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//能够被4整除并且不能被100整除
//		//能被400整除是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("闰年个数： %d\n", count);
//	return 0;
//}


//int main()
//{
//	int m;
//	int n;
//	int r;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}