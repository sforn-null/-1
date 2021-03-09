#include<stdio.h>
//参数是指针的形式
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			printf("%d ", *(*p+i)+j);
			//printf("%d ", p[i][j]);
			//printf("%d ", *(p[i]+j));
			//printf("%d ", (*(p + i))[j]);
			//这四种情况是等价的
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print2(arr, 3, 5);
	return 0;
}

//int(*parr3[10])[5];  parr3是一个数组，该数组有10个元素，每一个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int