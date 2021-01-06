#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        q.push(i);
    for(int i=1; i<n; i++)
    {
        int a;
        q.pop();
        a=q.front();
        q.push(a);
        q.pop();
    }
    printf("%d\n",q.front());
    return 0;
}
