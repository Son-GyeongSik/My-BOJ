#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int ans[1010],check[1010];
struct st{
    int n,c;
};
vector <st> data[1010];
int n,m,d,a;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        ans[i]=1<<29;
    for(int i=1; i<=m; i++)
    {
        int q,w,e;
        st tmp;
        scanf("%d %d %d",&q,&w,&e);
        tmp.n=w;
        tmp.c=e;
        data[q].push_back(tmp);
    }
    cin>>d>>a;
    ans[d]=0;
    int s=1,minn;
    for(int i=1; i<=n; i++)
    {
        minn=1<<29;
        for(int j=1; j<=n; j++)
        {
            if(check[j]==0 && minn>ans[j])
            {
                s=j;
                minn=ans[j];
            }
        }
        for(int j=0; j<data[s].size(); j++)
        {
            if(check[data[s][j].n]==0 && ans[data[s][j].n]>ans[s]+data[s][j].c)
                ans[data[s][j].n]=ans[s]+data[s][j].c;
        }
        check[s]=1;
    }
    cout<<ans[a]<<endl;
    return 0;
}
