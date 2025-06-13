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
//		printf("呵呵\n");
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	int m = 2;
//	int n = 1;
//	//scanf("%d", &day);
//	switch (n)//()里的内容要是整型
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)//switch 函数允许嵌套
//		{
//		case 1:n++;
//		case 2:m++, n++; break;
//		}
//	case 4:m++;
//		break;
//	//case 5:
//	//	printf("工作日\n");
//	//	break;
//	//case 6:
//	//case 7:
//	//	printf("休息日\n");
//	//	break;
//	default :
//		printf("输入错误\n");
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
//		printf("呵呵\n");
//	}
//	//if (num = 5)// = 赋值 == 判断相等
//	//{
//	//	printf("呵呵\n");
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
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//	return 0;
//}
//int main()
//{
//	;//是一个空语句
//	return 0;
//}


