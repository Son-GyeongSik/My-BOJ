#include<stdio.h>
#include<iostream>
using namespace std;

int arr[130][130];
int b, w;

void search(int st_r, int st_c, int ed_r, int ed_c)
{
	int mark = arr[st_r][st_c];
	for (int i = st_r; i < ed_r; i++)
	{
		for (int j = st_c; j < ed_c; j++)
		{
			if (mark != arr[i][j])
			{
				search(st_r, st_c, (st_r + ed_r) / 2, (st_c + ed_c) / 2);
				search(st_r, (st_c + ed_c) / 2, (st_r + ed_r) / 2, ed_c);
				search((st_r + ed_r) / 2, st_c, ed_r, (st_c + ed_c) / 2);
				search((st_r + ed_r) / 2, (st_c + ed_c) / 2, ed_r, ed_c);
				return;
			}
		}
	}
	if (mark == 1)
		b++;
	else
		w++;
	return;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);

	search(0, 0, n, n);
	cout << w << endl << b << endl;
}