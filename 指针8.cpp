#include<stdio.h>
//指针数组
int main()
{
	int arr[10] = { 0 };//整型数组
	char ch[5] = { 0 };//字符数组
	int* parr[4];//存放整形指针的数组
	char* pch[5];//存放字符指针的数组
	return 0;
}

//用法太低级，基本不这么用
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr[4] = { &a,&b,&c,&d };
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}