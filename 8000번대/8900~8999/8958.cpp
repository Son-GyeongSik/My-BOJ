#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int score[100] = { 0, };
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		char c[100];
		int res = 0;
		scanf("%s", c);
		if(c[0]=='O')
			score[0] = 1;
		for (int i = 1; c[i] != '\0'; i++)
		{
			if (c[i] == c[i - 1] && c[i]=='O')
				score[i] = score[i - 1] + 1;
			else if(c[i]=='O')
				score[i] = 1;
		}
		for (int i = 0; i < 100; i++)
		{
			res += score[i];
			score[i] = 0;
		}
		printf("%d\n", res);
	}
	return 0;
}