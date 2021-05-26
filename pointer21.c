#include<stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	void* p = &a;//无类型的指针
	//void*类型的指针可以接收任意类型的地址
	//*p = 0;//错的 void*类型的指针不能进行解引用操作
	//p++; //void*类型的指针不能进行+-整数的操作
	return 0;
}
