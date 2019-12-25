#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr[1000];
	int n, max = -10;
	double res = 0.0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < n; i++)
		res += (double)arr[i] / max;
	printf("%lf\n", res / n * 100);
	return 0;
}