#include<stdio.h>

void test(int arr[3][5])
{}
void test(int arr[][5])
{}
void test(int arr[3][])
{}  //这种列不能省略
void test3(int (*arr)[5])
{}
int main()
{
	int arr[3][5] = { 0 };
	//test(arr);//二维数组传参
	test3(arr);
	return 0;
}