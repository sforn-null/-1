#include<stdio.h>
//�ַ�ָ��
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
	const char* p = "abcdef";//const char��ʾ�����ַ��� ���ܱ��޸�
	printf("%s", p);
	return 0;
}