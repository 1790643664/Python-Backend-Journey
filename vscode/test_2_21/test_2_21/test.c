#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int global = 2013;
void test()
{
	printf("%d\n", global);
}
int main()
{

	int num = 0;
		

	printf("num = %d\n", num);
	return 0;

}

//int main()
//{
//	//����2���ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ��һ�����뺯��
//	scanf_s("%d%d",&num1, &num2);//ȡ��ַ��&
//	
//	//C�����﷨�涨������Ҫ���嵽��ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	printf("%d\n",a);
//	return 0;
//}



//int num2 = 10;//ȫ�ֱ���
//int num1 = 300;
//int main()
//{
//	int num1 = 10;//�ֲ�����
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", num1);
//	return 0;
//}
//
//



//int main()
//{
//	short age = 20;//���ڴ�������2���ֽ�
//	float weight = 95.6;//���ڴ�������8���ֽ�
//	return 0;

//}





//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//	return 0;
//}
//
//




//char - �ַ�����
// 
//int main()
//{
//	//char ch = 'A';//�ڴ�
//	//printf("%c\n", ch);//%c-��ӡһ���ַ��͵�����
//	//20
//	//int age = 20;
//	//printf("%d\n", age);//%d-��ӡһ������ʮ��������
//	//long ������
//	/*long num = 100;
//	printf("%d\n", num);*/
//	//float f = 5.0;
//	//printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
////����һ��stdio.h���ļ�
////std-��׼ standard input output
////
//#include <stdio.h>
//
//int main()//������-��������-main��������ֻ��һ��
//{	
//	//�������������
//	//����Ļ�ϴ�ӡhello world
//	//����printf function - printf - ��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//�õı��˵Ķ���-���к�
//	//#include
//	printf("hello ����\n");
//	return 0;
//}
//
////int �����ε���˼
////mianǰ���int��ʾmain��������һ������һ������ֵ
//int main()
//{
//
//	return 0;
//}
//
////����д���Ѿ���ʱ��
//void main()
//{
//	return 0;
//}