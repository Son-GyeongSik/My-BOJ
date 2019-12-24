#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
struct ss{
    int d,en;
};
vector<ss> v[900];
struct data{
    long long d,no;
}d[200010];
long long ans[900],n,a,b,m,check[900];
bool cmp(data a, data b)
{
    return a.d>b.d;
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int st;
        ss q;
        scanf("%d %d %d",&st,&q.en,&q.d);
        v[st].push_back(q);
        int tmp=q.en;
        q.en=st;
        st=tmp;
        v[st].push_back(q);
    }
    cin>>a>>b;
    for(int i=1; i<=n; i++)
        ans[i]=1<<30;
    d[1].d=0;
    d[1].no=1;
    ans[1]=0;
    int cnt=2;
    while(cnt>1)
    {
        int va,ed;
        va=d[1].d;
        ed=d[1].no;
        if(ed==a)
            break;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            if(ans[v[ed][i].en]>va+v[ed][i].d)
            {
                ans[v[ed][i].en]=va+v[ed][i].d;
                d[cnt].d=va+v[ed][i].d;
                d[cnt].no=v[ed][i].en;
                cnt++;
                push_heap(d+1,d+cnt,cmp);
            }
        }
        check[ed]=1;
    }
    long long ans1=ans[a];
    if(ans1==1<<30)
        ans1=1<<20;
    for(int i=1; i<=n; i++)
    {
        ans[i]=1<<30;
        check[i]=0;
    }
    d[1].d=0;
    d[1].no=1;
    ans[1]=0;
    cnt=2;
    while(cnt>1)
    {
        int va,ed;
        va=d[1].d;
        ed=d[1].no;
        if(ed==b)
            break;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            if(ans[v[ed][i].en]>va+v[ed][i].d)
            {
                ans[v[ed][i].en]=va+v[ed][i].d;
                d[cnt].d=va+v[ed][i].d;
                d[cnt].no=v[ed][i].en;
                cnt++;
                push_heap(d+1,d+cnt,cmp);
            }
        }
        check[ed]=1;
    }
    long long ans2=ans[b];
    if(ans2==1<<30)
        ans2=1<<20;
    for(int i=1; i<=n; i++)
    {
        ans[i]=1<<30;
        check[i]=0;
    }
    d[1].d=0;
    d[1].no=a;
    ans[a]=0;
    cnt=2;
    while(cnt>1)
    {
        int va,ed;
        va=d[1].d;
        ed=d[1].no;
        if(ed==b)
            break;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            if(ans[v[ed][i].en]>va+v[ed][i].d)
            {
                ans[v[ed][i].en]=va+v[ed][i].d;
                d[cnt].d=va+v[ed][i].d;
                d[cnt].no=v[ed][i].en;
                cnt++;
                push_heap(d+1,d+cnt,cmp);
            }
        }
        check[ed]=1;
    }
    long long ans3=ans[b];
    if(ans3==1<<30)
        ans3=1<<20;
    for(int i=1; i<=n; i++)
    {
        ans[i]=1<<30;
        check[i]=0;
    }
    d[1].d=0;
    d[1].no=b;
    ans[b]=0;
    cnt=2;
    while(cnt>1)
    {
        int va,ed;
        va=d[1].d;
        ed=d[1].no;
        if(ed==a)
            break;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            if(ans[v[ed][i].en]>va+v[ed][i].d)
            {
                ans[v[ed][i].en]=va+v[ed][i].d;
                d[cnt].d=va+v[ed][i].d;
                d[cnt].no=v[ed][i].en;
                cnt++;
                push_heap(d+1,d+cnt,cmp);
            }
        }
        check[ed]=1;
    }
    long long ans4=ans[a];
    if(ans4==1<<30)
        ans4=1<<20;
    for(int i=1; i<=n; i++)
    {
        ans[i]=1<<30;
        check[i]=0;
    }
    d[1].d=0;
    d[1].no=a;
    ans[a]=0;
    cnt=2;
    while(cnt>1)
    {
        int va,ed;
        va=d[1].d;
        ed=d[1].no;
        if(ed==n)
            break;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            if(ans[v[ed][i].en]>va+v[ed][i].d)
            {
                ans[v[ed][i].en]=va+v[ed][i].d;
                d[cnt].d=va+v[ed][i].d;
                d[cnt].no=v[ed][i].en;
                cnt++;
                push_heap(d+1,d+cnt,cmp);
            }
        }
        check[ed]=1;
    }
    long long ans5=ans[n];
    if(ans5==1<<30)
        ans5=1<<20;
    for(int i=1; i<=n; i++)
    {
        ans[i]=1<<30;
        check[i]=0;
    }
    d[1].d=0;
    d[1].no=b;
    ans[b]=0;
    cnt=2;
    while(cnt>1)
    {
        int va,ed;
        va=d[1].d;
        ed=d[1].no;
        if(ed==n)
            break;
        pop_heap(d+1,d+cnt,cmp);
        cnt--;
        for(int i=0; i<v[ed].size(); i++)
        {
            if(check[v[ed][i].en]==1)
                continue;
            if(ans[v[ed][i].en]>va+v[ed][i].d)
            {
                ans[v[ed][i].en]=va+v[ed][i].d;
                d[cnt].d=va+v[ed][i].d;
                d[cnt].no=v[ed][i].en;
                cnt++;
                push_heap(d+1,d+cnt,cmp);
            }
        }
        check[ed]=1;
    }
    long long ans6=ans[n];
    if(ans6==1<<30)
        ans6=1<<20;
    int s=min(ans1+ans6+ans3,ans4+ans2+ans5);
    if(s>=1<<20)
        cout<<"-1"<<endl;
    else
        cout << s << endl;
    return 0;
}
