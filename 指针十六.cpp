#include<stdio.h>

//����ָ������
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}

int main()
{
	//ָ������
	int* arr[5];
	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ�������
	int(*pa)(int, int) = Add;
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		printf("%d\n", parr[i](2, 3));
	}
	return 0;
}