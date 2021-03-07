#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;//指针变量

	return 0;
}

//指针类型
int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;//这个时候a的四个字节全被改成0
	char* pc = &a;
	*pc = 0;//这个时候只能改变一个字节，因为char的类型只有一个字节
	//char* pc = &a;
	//printf("%p\n", pa);
	//printf("p\n", pc);
	return 0;
}
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p; *p能够访问4个字节
//char*p; *p       1
//double*p; *p     8
