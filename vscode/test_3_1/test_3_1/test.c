#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;

}
//int main()
//{
//	int b = 10;//����4���ֽ�
//	//&a;//ȡ��ַ
//	int* p = &b;
//	printf("%p\n", &b);
//	printf("%p\n", p);
//	*p = 20;//* - �����ò�����
//	printf("b = %d\n", b);
//	//��һ�ֱ�������������ŵ�ַ�ı��� - ָ�����
//	//printf("%p\n", &a);
//	return 0;
//}


//#define �����ʶ������
//#define MAX 100
//#define ���Զ���� - ������
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//�����
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//
//}
//static ���ξֲ�����
//�ֲ��������������ڱ䳤
//static ����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ��Ͳ���ʹ����
//static���κ���
//Ҳ�Ǹı��˺����������� - ��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������

//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
////int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a ��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);//2,3,4,5,6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main() 
//{
//	//int float;//error
//	//typedef - ���Ͷ��� - �����ض���
//	//����  -- С��  -- ����
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	return 0;
//}
//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 1;
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//	return 0;
//}


//
//int main()
//{
//	int a = 10;//�ֲ����� - �Զ�����
//	return 0;
//}

//
// �з�����
// 
// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����--ԭ�룬���룬���� ��ͬ
// ������
// ԭ��      -->                   ����                  -->         ����
// ֱ�Ӱ�������					ԭ�����λ��������					����+1
// д������������				����λ����	
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//() -- �������ò�����
//	return 0;
//
//}
//& * . ->

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//��������������Ŀ��������exp1 �� exp2 : exp3
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//	return 0;
//
//}


//int main()
//{
//	//��  - ��0
//	//��  -  0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 0;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}


//
//int main()
//{
//	int a = 3.14;//double -> int 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++.��ʹ�ã���++
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a = %d b = %d\n", a, b);//11, 11
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//~����2����λ��λȡ��
//	//000000000000000000000000000000
//	//111111111111111111111111111111 
//	//ԭ�룬���룬����
//	// ԭ����˷���λ�����İ�λȡ�� ->����+1 ->����
//	// ԭ�� <- ������˷���λ��λȡ�� <- ����-1
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õģ���ӡ�ĵ����������ԭ��
//	return 0;
//	
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main() 
//{
//	//�ַ����Ľ�����־;'\0'
//	// 'abcdef\0'
//	//'\0'
//	//'\0' - ת���ַ� - 0
//	//0 - > ����0
//	//'0' -> 48
//	//'a' 'b' 'c' '0' '1' '2'
//	// EOF -> end of file - �ļ�������־ -1
//
//}