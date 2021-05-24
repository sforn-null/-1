#include<stdio.h>
//指针数组-数组-存放指针的数组
//数组指针-指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//指针数组-存放指针
	int arr[10];
	int* arr2[3] = {&a,&b,&c};
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}
