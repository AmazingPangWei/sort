#include <iostream>
#include <algorithm>
using namespace std;

int a[] = { 5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
void CocktailSort(int n)
{
	//��β��������ð�������һ���Ż�
	//��ð������Ĳ�ͬ�����ڴӵ͵���Ȼ��Ӹߵ���
	int left = 0, right = n - 1;
	while (left < right)
	{
		//ʹ������������ұ�ȥ
		for (int i = left; i < right; i++)
		{
			if (a[i] > a[i + 1])
				swap(a[i], a[i + 1]);
		}
		right--;
		//ʹ����С���������ȥ
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