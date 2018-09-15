#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int QuickPass(int *a,int low,int high)
{
	int x = a[low];
	while (low < high)
	{
		//low < high����35 14�������
		//������Ϊ14 14
		//x > a[low]��low++������Խ�磬����
		while (low < high && x < a[high])
			high--;
		if (low < high)
		{
			a[low] = a[high];
			low++;
		}
		while (low < high && x > a[low])
			low++;
		if (low < high)
		{
			a[high] = a[low];
			high--;
		}
	}
	a[low] = x;
	return low;
}

//��������ֱ�Ӱ�x������Ӧ��λ�ã������Ͳ����������˵�����
//int QuickPass(int *a, int low, int high)
//{
//	int x = a[low];
//	while (low < high)
//	{
//		while (x < a[high])
//			high--;
//		if (low < high)
//		{
//			a[low] = a[high];
//			a[high] = x;
//			low++;
//		}
//		while (x > a[low])
//			low++;
//		if (low < high)
//		{
//			a[high] = a[low];
//			a[low] = x;
//			high--;
//		}
//	}
//	return low;
//}

void Quick_sort(int *a,int low,int high)
{
	if (low < high)
	{
		int t = QuickPass(a, low, high);
		Quick_sort(a, low, t - 1);
		Quick_sort(a, t + 1, high);
	}
}

int main()
{
	int x[] = { 48,62,35,77,55,14,35,98 };
	//int x[] = { 35,14};
	Quick_sort(x, 0, 7);
	for (int i = 0; i < 8; i++)
		printf("%d ", x[i]);
	system("pause");
	return 0;
}