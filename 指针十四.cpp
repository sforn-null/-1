#include<stdio.h>

//函数指针-指向函数的指针
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
	//printf("%d\n", Add(a, b));
	//&函数名和函数名都是函数的地址
	/*printf("%p\n", &Add);
	printf("%p\n", Add);*/
	int(*pa)(int, int) = &Add;
	printf("%d\n", (*pa)(2, 3));
	return 0;
}