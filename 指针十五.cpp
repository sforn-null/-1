#include<stdio.h>

//signal��һ����������
//signal�����Ĳ�����2������һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ�����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//void(*signal(int, void(*)(int)))(int);
//��
typedef void(*pfun_t)(int);
pfun_t sigenal(int, pfun_t);


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
	int(*pa)(int, int) = &Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n", (*pa)(2, 3));//������
	return 0;
}