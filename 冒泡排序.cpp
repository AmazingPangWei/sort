#include <iostream>
using namespace std;

int a[] = { 5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
void BubbleSort(int n)
{
	//依次比较，大数沉底
	//一共比较n-1次
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}

int main()
{
	BubbleSort(27);
	for (int i = 0; i < 27; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}