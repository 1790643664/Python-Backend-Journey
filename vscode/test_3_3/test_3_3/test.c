#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++");//strcopy - string copy - �ַ������� - �⺯�� - string.h
	 struct Book*pb = &b1;
	//.     �ṹ�����.��Ա
	//->    �ṹ��ָ��->��Ա
	printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb). price);
	//printf("����: %s\n", b1.name);
	//printf("�۸�: %dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	return 0;
}
//int main()
//{
//	//�ṹ��
//	//char int double 
//	//�� = 
//	//��w'
//	//�� -���Ӷ���
//	// ����+���+����+���֤��
//	// ����+����+����ɫ+����
//	// ���Ӷ��� ������������һ������
//	//
//
//
//	
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(int*));*/
//	//double d = 3.14;
//	//double* pd = &d;//32 - 4, 64 - 8
//	//*pd = 3.3;
//	//printf("%d\n", sizeof(pd));
//	/*printf("%lf\n", d);
//	printf("%lf\n", *pd);*/
//	//int a = 10;//������4���ֽڵĿռ�
//	//int* p = &a;//p��һ������ - ָ�����
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	////printf("%p\n", p);
//	//printf("%d\n", a);
//	return 0;
//}