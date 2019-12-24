#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int res;
	int arr[10] = { 0, };
	scanf("%d %d %d", &a, &b, &c);
	res = a * b * c;
	while (res > 0)
	{
		int x;
		x = res % 10;
		res /= 10;
		arr[x]++;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}