#include<stdio.h>

void test(int arr[3][5])
{}
void test(int arr[][5])
{}
void test(int arr[3][])
{}  //�����в���ʡ��
void test3(int (*arr)[5])
{}
int main()
{
	int arr[3][5] = { 0 };
	//test(arr);//��ά���鴫��
	test3(arr);
	return 0;
}