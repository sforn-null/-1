#include<stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	void* p = &a;//�����͵�ָ��
	//void*���͵�ָ����Խ����������͵ĵ�ַ
	//*p = 0;//��� void*���͵�ָ�벻�ܽ��н����ò���
	//p++; //void*���͵�ָ�벻�ܽ���+-�����Ĳ���
	return 0;
}