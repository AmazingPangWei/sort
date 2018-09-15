#include <iostream>
using namespace std;


int a[] = { 5,12,54,8,4,5,1,3,4,78,4,5,2,5,4,51,2,5,54,1,2,15,4,51,78,97,12 };
int t[100];
int main()
{
	for (int i = 0; i < 27; i++)
		t[a[i]]++;
	for(int i=0;i<100;i++)
		if (t[i] != 0)
		{
			for (int j = 0; j < t[i]; j++)
				cout << i << ' ';
		}
	system("pause");
	return 0;
}