#include <iostream>
#include <stdio.h>
using namespace std;
int t,n,w,data[3][10100];
int main()
{
    int a[5][10100];
    cin>>t;
    for(int o=1; o<=t; o++)
    {
        cin>>n>>w;
        for(int i=1; i<=2; i++)
        {
            for(int j=1; j<=n; j++)
                scanf("%d",&data[i][j]);
        }
        for(int i=0; i<=n; i++)
            a[1][i]=a[2][i]=a[3][i]=a[4][i]=1<<20;
        a[1][1]=2;
        a[2][1]=1<<20;
        a[3][1]=1<<20;
        data[1][0]=1<<20;
        data[2][0]=1<<20;
        if(data[1][1]+data[2][1]>w)
            a[4][1]=1<<20;
        else
            a[4][1]=1;
        for(int i=2; i<=n; i++)
        {
            a[1][i]=min(a[1][i-1]+2,a[2][i-1]+2);
            a[1][i]=min(a[1][i],a[3][i-1]+2);
            a[1][i]=min(a[1][i],a[4][i-1]+2);
            if(data[1][i]+data[1][i-1]>w)
                a[2][i]=1<<20;
            else
                a[2][i]=min(a[1][i-1]+1,a[3][i-1]+1);
            if(data[2][i]+data[2][i-1]>w)
                a[3][i]=1<<20;
            else
                a[3][i]=min(a[1][i-1]+1,a[2][i-1]+1);
            if(data[1][i]+data[1][i-1]<=w && data[2][i]+data[2][i-1]<=w)
                a[4][i]= a[1][i-1];
            if(data[1][i]+data[2][i]<=w)
            {
                a[4][i]=min(a[4][i],a[1][i-1]+1);
                a[4][i]=min(a[4][i],a[3][i-1]+1);
                a[4][i]=min(a[4][i],a[2][i-1]+1);
                a[4][i]=min(a[4][i],a[4][i-1]+1);
            }
            if(data[1][i]+data[2][i]>w && (data[1][i]+data[1][i-1]>w || data[2][i]+data[2][i-1]>w))
                a[4][i]=1<<20;
        }
        int minn=1<<20;
        for(int i=1; i<=4; i++)
            minn=min(a[i][n],minn);
        if(data[1][1]+data[1][n]<=w)
        {
            for(int i=0; i<=n; i++)
                a[1][i]=a[2][i]=a[3][i]=a[4][i]=1<<20;
            a[1][1]=1<<20;
            a[2][1]=1;
            a[3][1]=1<<20;
            a[4][1]=1<<20;
            for(int i=2; i<=n; i++)
            {
                a[1][i]=min(a[1][i-1]+2,a[2][i-1]+2);
                a[1][i]=min(a[1][i],a[3][i-1]+2);
                a[1][i]=min(a[1][i],a[4][i-1]+2);
                if(i==n || data[1][i]+data[1][i-1]>w)
                    a[2][i]=1<<20;
                else
                    a[2][i]=min(a[1][i-1]+1,a[3][i-1]+1);
                if(data[2][i]+data[2][i-1]>w)
                    a[3][i]=1<<20;
                else
                    a[3][i]=min(a[1][i-1]+1,a[2][i-1]+1);
                if(data[1][i]+data[1][i-1]<=w && data[2][i]+data[2][i-1]<=w)
                    a[4][i]= a[1][i-1];
                if(data[1][i]+data[2][i]<=w)
                {
                    a[4][i]=min(a[4][i],a[1][i-1]+1);
                    a[4][i]=min(a[4][i],a[3][i-1]+1);
                    a[4][i]=min(a[4][i],a[2][i-1]+1);
                    a[4][i]=min(a[4][i],a[4][i-1]+1);
                }
                if(data[1][i]+data[2][i]>w && (data[1][i]+data[1][i-1]>w || data[2][i]+data[2][i-1]>w))
                    a[4][i]=1<<20;
            }
            minn=min(a[1][n],minn);
            minn=min(a[3][n],minn);
        }
        if(data[2][n]+data[2][1]<=w)
        {
            for(int i=0; i<=n; i++)
                a[1][i]=a[2][i]=a[3][i]=a[4][i]=1<<20;
            a[1][1]=1<<20;
            a[2][1]=1<<20;
            a[3][1]=1;
            a[4][1]=1<<20;
            for(int i=2; i<=n; i++)
            {
                a[1][i]=min(a[1][i-1]+2,a[2][i-1]+2);
                a[1][i]=min(a[1][i],a[3][i-1]+2);
                a[1][i]=min(a[1][i],a[4][i-1]+2);
                if(data[1][i]+data[1][i-1]>w)
                    a[2][i]=1<<20;
                else
                    a[2][i]=min(a[1][i-1]+1,a[3][i-1]+1);
                if(i==n || data[2][i]+data[2][i-1]>w)
                    a[3][i]=1<<20;
                else
                    a[3][i]=min(a[1][i-1]+1,a[2][i-1]+1);
                if(data[1][i]+data[1][i-1]<=w && data[2][i]+data[2][i-1]<=w)
                    a[4][i]= a[1][i-1];
                if(data[1][i]+data[2][i]<=w)
                {
                    a[4][i]=min(a[4][i],a[1][i-1]+1);
                    a[4][i]=min(a[4][i],a[3][i-1]+1);
                    a[4][i]=min(a[4][i],a[2][i-1]+1);
                    a[4][i]=min(a[4][i],a[4][i-1]+1);
                }
                if(data[1][i]+data[2][i]>w && (data[1][i]+data[1][i-1]>w || data[2][i]+data[2][i-1]>w))
                    a[4][i]=1<<20;
            }
            minn=min(a[1][n],minn);
            minn=min(a[2][n],minn);
        }
        if(data[1][1]+data[1][n]<=w && data[2][1]+data[2][n]<=w)
        {
            for(int i=0; i<=n; i++)
                a[1][i]=a[2][i]=a[3][i]=a[4][i]=1<<20;
            a[1][1]=1<<20;
            a[2][1]=1<<20;
            a[3][1]=1<<20;
            a[4][1]=2;
            for(int i=2; i<n; i++)
            {
                a[1][i]=min(a[1][i-1]+2,a[2][i-1]+2);
                a[1][i]=min(a[1][i],a[3][i-1]+2);
                a[1][i]=min(a[1][i],a[4][i-1]+2);
                if(data[1][i]+data[1][i-1]>w)
                    a[2][i]=1<<20;
                else
                    a[2][i]=min(a[1][i-1]+1,a[3][i-1]+1);
                if(data[2][i]+data[2][i-1]>w)
                    a[3][i]=1<<20;
                else
                    a[3][i]=min(a[1][i-1]+1,a[2][i-1]+1);
                if(data[1][i]+data[1][i-1]<=w && data[2][i]+data[2][i-1]<=w)
                    a[4][i]= a[1][i-1];
                if(data[1][i]+data[2][i]<=w)
                {
                    a[4][i]=min(a[4][i],a[1][i-1]+1);
                    a[4][i]=min(a[4][i],a[3][i-1]+1);
                    a[4][i]=min(a[4][i],a[2][i-1]+1);
                    a[4][i]=min(a[4][i],a[4][i-1]+1);
                }
                if(data[1][i]+data[2][i]>w && (data[1][i]+data[1][i-1]>w || data[2][i]+data[2][i-1]>w))
                    a[4][i]=1<<20;
            }
            for(int i=1; i<=4; i++)
                minn=min(a[i][n-1],minn);
        }
        cout<<minn<<endl;
    }
    return 0;
}
