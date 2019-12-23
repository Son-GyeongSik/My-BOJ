#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	long long arr[100];
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 2;
	cin >> n;
	for (int i = 4; i <= n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[n] << endl;
	return 0;
}