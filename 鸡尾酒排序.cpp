#include <iostream>
#include <algorithm>
using namespace std;

int a[] = { 5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
void CocktailSort(int n)
{
	//鸡尾酒排序是冒泡排序的一种优化
	//与冒泡排序的不同处在于从低到高然后从高到低
	int left = 0, right = n - 1;
	while (left < right)
	{
		//使得最大数到最右边去
		for (int i = left; i < right; i++)
		{
			if (a[i] > a[i + 1])
				swap(a[i], a[i + 1]);
		}
		right--;
		//使得最小数到最左边去
		for (int i = right; i >= 1; i--)
		{
			if (a[i] < a[i - 1])
				swap(a[i], a[i - 1]);
		}
		left++;
	}
}

int main()
{
	CocktailSort(27);
	for (int i = 0; i < 27; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}