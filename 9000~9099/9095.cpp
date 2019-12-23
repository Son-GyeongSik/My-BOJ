#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,t;
	int arr[20];
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	cin >> t;
	for (int j = 1; j <= t; j++)
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		cout << arr[n] << endl;
	}
	return 0;
}