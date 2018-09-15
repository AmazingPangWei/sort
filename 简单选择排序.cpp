#include <iostream>
#include <algorithm>
using namespace std;

int a[] = { 5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
void selectSort(int n)
{
	//选择最小的数排在前面，每次如此
	//一共有n-1次循环
	for (int i = 0; i < n - 1; i++)
	{
		int index = i;//记录下标
		int Min = a[i];
		for (int j = i + 1; j < n; j++)
		{
			if (Min > a[j])
			{
				Min = a[j];
				index = j;
			}
		}
		swap(a[i], a[index]);
	}
}

int main()
{
	selectSort(27);
	for (int i = 0; i < 27; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}