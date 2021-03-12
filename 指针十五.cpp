#include<stdio.h>

//signal是一个函数声明
//signal函数的参数有2个，第一个是int类型，第二个是函数指针，该函数指针指向函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void
//void(*signal(int, void(*)(int)))(int);
//简化
typedef void(*pfun_t)(int);
pfun_t sigenal(int, pfun_t);


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = &Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n", (*pa)(2, 3));//都可以
	return 0;
}