#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
using namespace std;
bool cmp(string a, string b)
{
	if (a.size() < b.size())
		return true;
	else if (a.size() > b.size())
		return false;
	int an = 0, bn = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
			an += a[i] - '0';
		if (b[i] >= 48 && b[i] <= 57)
			bn += b[i] - '0';
	}
	if (an < bn)
		return true;
	else if (an > bn)
		return false;
	if (a.compare(b) < 0)
		return true;
	return false;
}
int ans[5000000];
string bookstore[1001];
int ran[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> bookstore[i];
	sort(bookstore, bookstore + n, cmp);
	for (int i = 0; i < n; i++)
		cout << bookstore[i] << endl;
}