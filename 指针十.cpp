#include<stdio.h>
//数组指针
int amin()
{
	int* p = NULL;  //p是整型指针-指向整形的指针-可以存放整形的地址
	char* pc = NULL;//pc是字符指针-指向字符的指针-可以存放字符的地址
	                //数组指针-指向数组的指针-可以存放数组的地址
	//int arr[10] = { 0 };
	//arr-首元素地址
	//&arr[0]-首元素地址
	//&arr-数组的地址
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10]=&arr;//数组的地址要存起来
	//上面的p就是数组指针
	//int*p1[10]是指针数组
	//int （*p2）[10]是数组指针
	char* arr1[5];
	char* (*pa)[5] = &arr1;
	return 0;
}

//很麻烦，一般不是这么用
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0;i < 10;i++)//*pa==arr
	{
		printf("%d ", (*pa)[i]);
		//所以也可以用
		printf("%d ", *(*pa+i));
	}
	return 0;
}