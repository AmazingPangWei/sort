#include <iostream>
#include <algorithm>
using namespace std;

int a[] = { 0,5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
//int a[] = { 0,5, 2, 9, 4, 7, 6, 1, 3, 8 };
//�ѻ�������С���ѣ�С���ѻ�ʹ
void heapify(int index,int size)
{
	//������Һ��ӵ��±�
	int left_child = index * 2, right_child = index * 2 + 1;
	int Min = index;//��С�����±�
	//���Һ������Լ����Աȣ�ע�ⲻҪԽ�磡
	if (right_child <= size &&left_child <= size)
	{
		if (a[Min] > a[left_child])
			Min = left_child;
		if (a[Min] > a[right_child])
			Min = right_child;
	}
	//˵��indexû�к���С����index���ƣ��������жѻ�
	if (Min != index)
	{
		swap(a[Min], a[index]);
		heapify(Min, size);
	}
}

//����
void buildHeap(int size)
{
	//�ӷ�Ҷ�ӽ�㿪ʼ
	for (int i = size / 2; i >= 1; i--)
	{
		heapify(i,size);
	}
}

void heapSort(int size)
{
	buildHeap(27);

	int n = size;
	//ÿ��ȡ���Ѷ�Ԫ��
	while (n > 1)
	{
		swap(a[1], a[n]);
		n--;
		heapify(1,n);
	}
}

int main()
{
	heapSort(27);
	for (int i = 1; i <= 27; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}