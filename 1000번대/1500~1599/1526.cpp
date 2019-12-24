#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
using namespace std;
int ans[5000000];
string bookstore[1001];
int ran[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = n; i >= 4; i--)
	{
		int d = i;
		int t = 1;
		while (d > 0)
		{
			if ((d % 10) != 4 && (d % 10) != 7)
			{
				t = 0;
				break;
			}
			d /= 10;
		}
		if (t)
		{
			cout << i << endl;
			return 0;
		}
	}
}