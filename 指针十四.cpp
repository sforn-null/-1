#include<stdio.h>

//����ָ��-ָ������ָ��
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
	//&�������ͺ��������Ǻ����ĵ�ַ
	/*printf("%p\n", &Add);
	printf("%p\n", Add);*/
	int(*pa)(int, int) = &Add;
	printf("%d\n", (*pa)(2, 3));
	return 0;
}