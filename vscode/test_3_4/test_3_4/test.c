#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int ch = 0;
	//ctrl + z
	//EOF = end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//char ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}
//
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	while (1)
//		printf("�Ǻ�\n");
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	int m = 2;
//	int n = 1;
//	//scanf("%d", &day);
//	switch (n)//()�������Ҫ������
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)//switch ��������Ƕ��
//		{
//		case 1:n++;
//		case 2:m++, n++; break;
//		}
//	case 4:m++;
//		break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//case 7:
//	//	printf("��Ϣ��\n");
//	//	break;
//	default :
//		printf("�������\n");
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//
//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("�Ǻ�\n");
//	}
//	//if (num = 5)// = ��ֵ == �ж����
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//	return 0;
//		
//
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//	return 0;
//}
//int main()
//{
//	;//��һ�������
//	return 0;
//}


