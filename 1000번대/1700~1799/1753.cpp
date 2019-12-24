#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
struct ss{
    int d,en;
};
vector<ss> v[20001];
int n,m,s,ans[20001],check[20001];
struct data{
    int no,d;
}d[300100];
bool cmp(data a, data b)
{
    return a.d>b.d;
}
int main()
{
    cin>>n>>m;
    cin>>s;
    for(int i=1; i<=m; i++)
    {
        int st;
        ss q;
        scanf("%d %d %d",&st, &q.en, &q.d);
        v[st].push_back(q);
    }
    for(int i=1; i<=n; i++)
        ans[i]=1<<30;
    d[1].d=0;
    d[1].no=s;
    ans[s]=0;
    int cnt=2;
    while(cnt>1)
    {
        int y=0;
        int va,ed;
        while(check[d[1].no]==1)
        {
            pop_heap(d+1,d+cnt,cmp);
            cnt--;
            if(cnt==1)
            {
                y=1;
                break;
            }
        }
        if(y)
            break;
        va=d[1].d;
        ed=d[1].no;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            else
            {
                if(ans[v[ed][i].en]>va+v[ed][i].d)
                {
                    ans[v[ed][i].en]=va+v[ed][i].d;
                    d[cnt].d=va+v[ed][i].d;
                    d[cnt].no=v[ed][i].en;
                    cnt++;
                    push_heap(d+1,d+cnt,cmp);
                }
            }
        }
        check[ed]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(ans[i]==1<<30)
            printf("INF\n");
        else
            printf("%d\n",ans[i]);
    }
    return 0;
}
