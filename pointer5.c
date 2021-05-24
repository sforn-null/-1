#include<stdio.h>
//字符指针
int main()
{
	char arr[] = "abcdef";
	char* p = arr;
	printf("%s\n", arr);
	printf("%s\n",p);
	return 0;
}
int main()
{
	const char* p = "abcdef";//const char表示常量字符串 不能被修改
	printf("%s", p);
	return 0;
}
