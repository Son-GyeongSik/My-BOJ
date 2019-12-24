#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct st{
    int a,b;
}s[100001];
bool cmp(st a, st b)
{
    return a.a<b.a;
}
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            scanf("%d %d",&s[i].a,&s[i].b);
        sort(s+1,s+n+1,cmp);
        int cnt=1;
        int maxx=s[1].b;
        for(int i=2; i<=n; i++)
        {
            if(maxx>s[i].b)
            {
                cnt++;
                maxx=s[i].b;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
