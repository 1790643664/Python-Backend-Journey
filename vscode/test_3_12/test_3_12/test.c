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
		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺������������ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���strcmp()
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
//	//����һ�������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ���������
//	//time
//	ret = rand()%100+1;//���������1-100
//	//
//	// printf("%d\n", ret);
//	//������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		if (guess == ret)
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�������,����������:\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//




////����Ļ�����һ��9*9�˷��ھ���
////1*1
////2*1=2 2*2=4
////3*1=3 3*2=6 3*3=9
////...
//int main()
//{
//	//ȷ����ӡ9��
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
//	int max = arr[0];//���ֵ
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
//		//�ж�i�Ƿ�Ϊ����
//		//�Գ���
//		//����2��i-1����
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
//	printf("�����ĸ����У� %d", count);
//	return 0;
//}
//��������n�־���
//





//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//�ܹ���4�������Ҳ��ܱ�100����
//		//�ܱ�400����������
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
//	printf("��������� %d\n", count);
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