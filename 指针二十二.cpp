//��qsort��ð������
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

//�Ƚ����־��ǱȽ��ַ���
//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp�������Ƚ�
//strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name)
//strcmp������ͷ�ļ���#include<string.h>

//qsort
//��һ���������������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�����
//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ