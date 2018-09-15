#include <iostream>
using namespace std;
int a[] = { 5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };

//�����𽥼��ٵ�һ�ֲ�������
void shellSort(int n)
{
	int d = 0;
	//���ɼ�����˴�ΪKnuth����ļ�������Լ��ټ���������㷨��Ч��
	while (d < n)
	{
		d = 3 * d + 1;
	}
	while (d >= 1)
	{
		//��ǰ���������������
		for (int i = d; i <= n; i++)
		{
			for (int j = i; j >= 0; j -= d)
			{
				if (a[j] < a[j - d])
					swap(a[j], a[j - d]);
				else
					break;
			}
		}
		d = (d - 1) / 3;
	}

}

int main()
{
	shellSort(26);
	for (int i = 0; i < 27; i++)
		cout << a[i] << ' ';
	system("pause");
	return 0;
}