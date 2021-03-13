#include<stdio.h>

//回调函数
//下面的不太贴切常用的形式
void print(const char* str)
{
	printf("hehe:%s\n", str);
}
void test(void(*p)(const char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	//qsort-可以排序任意类型的数据-库函数
	return 0;
}

qsort-库函数-排序
quick sort-
