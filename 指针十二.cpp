#include<stdio.h>
//������ָ�����ʽ
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
			//����������ǵȼ۵�
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

//int(*parr3[10])[5];  parr3��һ�����飬��������10��Ԫ�أ�ÿһ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int