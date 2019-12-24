#include <stdio.h>
#include <iostream>
using namespace std;
int r,c,num,maxx;
int dr[4] = { 0,0,1,-1 };
int dc[4] = { 1,-1,0,0 };
char check[500],arr[21][21];
int track(int x, int y)
{
	check[++num] = arr[x][y];
	if (maxx < num)
		maxx = num;
	for (int i = 0; i < 4; i++)
	{
		if (x + dr[i]<1 || x + dr[i]>r || y + dc[i]<1 || y + dc[i]>c)
			continue;
		int j;
		for (j = 1; j <= num; j++)
			if (arr[x + dr[i]][y + dc[i]] == check[j])
				break;
		if (j > num)
			track(x + dr[i], y + dc[i]);
	}
	num--;
	return 0;
}
int main() 
{
	cin >> r >> c;
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
			cin >> arr[i][j];
	track(1, 1);
	cout << maxx << endl;
	return 0;
}