#include <stdio.h>
int n, m;
int arr[50][50];
int k;

void dfs(int x, int y)
{
   arr[x][y] = 0;
   for (int i = -1; i <= 1; i += 2)
   {
      if (x + i >= 0 && x + i < m)
         if (arr[x + i][y] == 1)
            dfs(x + i, y);
      if (y + i >= 0 && y + i < n)
         if (arr[x][y + i] == 1)
            dfs(x, y + i);
   }
}
int solve()
{
   int cnt = 0;
   for (int i = 0; i < 50; i++)
      for (int j = 0; j < 50; j++)
         arr[i][j] = 0;
   int a, b;
   scanf("%d %d %d", &m, &n, &k);
   for (int i = 0; i < k; i++)
   {
       scanf("%d %d", &a, &b);
      arr[a][b] = 1;
   }
   for(int i=0; i<m; i++)
      for (int j = 0; j < n; j++)
      {
         if (arr[i][j] == 1)
         {
            dfs(i, j);
            cnt++;
         }
      }
   return cnt;
}
int main()
{
   int test;
   int ans[10000];
   scanf("%d", &test);
   for (int i = 0; i < test; i++)
      ans[i] = solve();
   for (int j = 0; j < test; j++)
      printf("%d\n", ans[j]);
}
