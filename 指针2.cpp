#include<stdio.h>

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	return 0;
}

int main()
{
  //未初始化的指针变量
	int* p;//局部变量不初始化，里边默认放的是随机值
	*p = 20;//不可用
	return 0;
}