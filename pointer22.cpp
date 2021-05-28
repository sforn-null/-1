//用qsort做冒泡排序

#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}

//比较名字就是比较字符串
//字符串比较不能直接用><=来比较，应该用strcmp函数来比较
//strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name)
//strcmp函数的头文件是#include<string.h>

//qsort
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素的大小-单位是字节
//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己定义
//            函数指针的两个参数是：待比较的两个元素的地址
