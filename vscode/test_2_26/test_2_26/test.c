#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
	int arr[30] = { 0 };
	printf("%d\n", sizeof(arr));
	//int a = 10;
	////sizeof �������/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);
	//printf("%d\n", sizeof(int));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}
//int main() 
//{
//	//��Ŀ������
//	//˫Ŀ������
//	// ��Ŀ������
//	//int a = 0;
//	//int b = 10;
//	//a + b;//+ ˫Ŀ������
//	//c���������Ǳ�ʾ���
//	//0 - ��
//	//1 - ��
//
//	int a = -2;
//	int b = -a;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//
//}

	
////int main()
//{
//	int a = 10;
//	a = 20;//= ��ֵ    == �ж����
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 10;
//	a -= 10;
//	a = a & 10;
//	a &= 10;
//	//���ϸ�ֵ��
//	//+= -= *= /= %= >>= <<= &= ^= |=
//	return 0;
//}
//int main()
//{
//	//��2���ƣ�λ����
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	int a = 3;
//	int b = 5;
//	int c = a^b;//���Ǵη� - �����
//	//���ļ������
//	// ��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	// ��Ӧ�Ķ�����λ���죬��Ϊ1
//	//011
//	//101
//	//110
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<< ����
//	//>> ����
//	int a = 1;
//	//����ռ4���ֽ�--32bitλ
//	//00000000000000000000000000000001
//	int b = a <<2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}
//


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//int e = 5;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[5]);
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	scanf_s("%d%d", &num1, &num2);
//	int a = 100;
//	int b = 200;
//	sum = Add(num1,num2);
//	sum = Add(a,b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����
//f(x) = 2*x+1

//
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000) {
//		printf("��һ�д���: %d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//	return 0;
//}
////int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("����һ����offer");
//	}
//	else {
//		printf("�������ؼ�������");
//	}
//	return 0;
//}
//
//
//
//



//
//int main()
//{
//	printf("%c\n", '\x61');
//
//	///*printf("%d\n", strlen("c:\test\32\test.c"));*/
//	//\32 - 32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���Ϊascii��ֵ����Ӧ���ַ�
//	///*printf("%c\n", '\132');*/
//	return 0;
//}
//
//



//int main()
//{
//	printf("D:\\code\\vs\\test_2_26\\test.c\n");
//	//\?
//	printf("%c\n", '\'');
//	//\t - ˮƽ�Ʊ��
//	return 0;
//}

//int main()
//{
//	printf("abc\n");
//		return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}
//int main() 
//{
//	char arr1[] = "abc";
//	//"abc" -- 'a','b','c','\0'--'\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c','\0'};
//	//'\0' -0
//	//'a' - 97
//	//'b' - 98
//	//'A' - 65
//	//...
//	//ASCII��ֵ
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
// int float 
// char
// �ַ�������
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";
//	return 0;
//}


//int main()
//{
//	const int n = 0;//n��һ���������������г��������ʣ���������˵n�ǳ�����
//	/*int arr[n] = { 0 };*/
//
//
//
//
//	//const - ������
//	//const���εĳ�����
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 6;
//	//printf("%d\n", num);
//	//	//���泣��
//	//	//3;
//	//	//5;
//		//6;
//		return 0;
//}
#define MAX 10
//#define ����ı�ʶ������

//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//
//ö�ٳ���
//ö��-һһ�о�
//
//�Ա��У�Ů������
//��ԭɫ���죬������
//���ڣ�1��2��3��4��5��6��7


//ö�ٹؼ��� - enum
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//YELLOW = 6;ö�ٳ�����ֵ�ǲ����Ըı��
//	return 0;
//}
//// 
////enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//MALE FAMALE SECRET - ö�ٳ���
//int main()
//{
//	/*enum Sex s = FEMALE;*/
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//





