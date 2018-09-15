#include <iostream>
#include <algorithm>
using namespace std;

int a[] = { 0,5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
//int a[] = { 0,5, 2, 9, 4, 7, 6, 1, 3, 8 };
//堆化，建立小根堆，小根堆会使
void heapify(int index,int size)
{
	//获得左右孩子的下标
	int left_child = index * 2, right_child = index * 2 + 1;
	int Min = index;//最小结点的下标
	//左右孩子与自己做对比，注意不要越界！
	if (right_child <= size &&left_child <= size)
	{
		if (a[Min] > a[left_child])
			Min = left_child;
		if (a[Min] > a[right_child])
			Min = right_child;
	}
	//说明index没有孩子小，将index下移，继续进行堆化
	if (Min != index)
	{
		swap(a[Min], a[index]);
		heapify(Min, size);
	}
}

//建堆
void buildHeap(int size)
{
	//从非叶子结点开始
	for (int i = size / 2; i >= 1; i--)
	{
		heapify(i,size);
	}
}

void heapSort(int size)
{
	buildHeap(27);

	int n = size;
	//每次取出堆顶元素
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