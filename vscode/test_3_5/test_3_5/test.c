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
//	//ʮ��ѭ��
//	//ʮ�δ�ӡ
//	//ʮ��Ԫ��
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
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		//...
//		i++;//����
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
//	//EOF - end of file -�ļ�������־
//	//while ((ch = getchar()) != EOF)//crtl + z getchar�ͻ���ܵ�EOF�ı�־
//	//{
//	//	putchar(ch);
//	////}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("���������룺>");
//	scanf("%s", &password);//�������룬�������password������
//	printf("��ȷ��(Y/N):>");
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}