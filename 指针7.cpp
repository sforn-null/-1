#include<stdio.h>
//一道面试题
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	if (p1 == p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	/*if (arr1 == arr2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}*/
	return 0;
}