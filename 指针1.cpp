#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;//ָ�����

	return 0;
}

//ָ������
int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;//���ʱ��a���ĸ��ֽ�ȫ���ĳ�0
	char* pc = &a;
	*pc = 0;//���ʱ��ֻ�ܸı�һ���ֽڣ���Ϊchar������ֻ��һ���ֽ�
	//char* pc = &a;
	//printf("%p\n", pa);
	//printf("p\n", pc);
	return 0;
}
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int*p; *p�ܹ�����4���ֽ�
//char*p; *p       1
//double*p; *p     8
