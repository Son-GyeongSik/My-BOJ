#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int st1[100001];
int st2[100001];
int q1[100001],in[100001],q2[100001];
int ans[100001];
int main()
{
    int cnt1=1;
    int n;
    long long a;
    cin>>n;
    cin>>in[1];
    st1[cnt1]=in[1];
    st2[cnt1]=1;
    cnt1++;
    q1[1]=1;
    for(int i=2; i<=n; i++)
    {
        scanf("%d",&in[i]);
        while(cnt1>1 && in[i]<=st1[cnt1-1])
            cnt1--;
        if(cnt1==1)
            q1[i]=1;
        else
            q1[i]=st2[cnt1-1]+1;
        st1[cnt1]=in[i];
        st2[cnt1]=i;
        cnt1++;
    }
    cnt1=1;
    st1[cnt1]=in[n];
    st2[cnt1]=n;
    cnt1++;
    q2[n]=n;
    for(int i=n-1; i>=1; i--)
    {
        while(cnt1>1 && in[i]<=st1[cnt1-1])
            cnt1--;
        if(cnt1==1)
            q2[i]=n;
        else
            q2[i]=st2[cnt1-1]-1;
        st1[cnt1]=in[i];
        st2[cnt1]=i;
        cnt1++;
    }
    int maxx=0;
    for(int i=1; i<=n; i++)
    {
        if(in[i]*(q2[i]-q1[i]+1)>maxx)
            maxx=in[i]*(q2[i]-q1[i]+1);
    }
        cout<<maxx<<endl;
    return 0;
}