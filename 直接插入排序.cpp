#include <iostream>
using namespace std;

int a[] = { 124,1,54,51,2,54,54,5,1,54,7,8,4654,5,123,13,5,48,7,86,456,156 };
void insert_sort(int n)
{
	for (int i = 1; i < n; i++)
	{
		//从a[1]开始向前插入
		for (int j = i; j >= 1; j--)
		{
			if (a[j]<a[j-1])
			{
				swap(a[j], a[j - 1]);
			}
			else
				break;
		}
	}
} 

int main()
{
	insert_sort(22);
	for (int i = 0; i < 22; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}