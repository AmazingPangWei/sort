//˼�룺��һ�������Ϊ�����֣��ֱ�ʹ�����������ٽ���ϲ�����
//���η�˼��
#include <iostream>
using namespace std;
int x[] = { 48,62,35,77,55,14,35,98 };
int temp[8];//��Ϊ�м������
void merge(int L,int half,int R)
{
	int l = L, r = half+1;
	int mid = half;
	int t = 0;
	while (l <= mid && r <= R)
	{
		if (x[l] < x[r])
			temp[t++] = x[l++];
		else
			temp[t++] = x[r++];
	}
	while (l <= mid)
	{
		temp[t++] = x[l++];
	}
	while (r <= R)
	{
		temp[t++] = x[r++];
	}
	for (int i = L; i <= R; i++)
		x[i] = temp[i - L];
}

void merge_sort(int L,int R)
{
	if (L < R)
	{
		//�������Ϊ����L~half��half+1~R
		int half = (L + R) / 2;
		merge_sort(L, half);
		merge_sort(half + 1, R);
		merge(L,half,R);
	}
}

int main()
{
	merge_sort(0, 7);
	for (int i = 0; i < 8; i++)
		cout << x[i] << ' ';
	system("pause");
	return 0;
}