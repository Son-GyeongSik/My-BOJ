#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char ch;
	while (a != 0 || b != 0)
	{
		scanf("%d %d", &a, &b);
		if ((ch = getchar()) == EOF)
			break;
		printf("%d\n", a + b);
	}
	return 0;
}
