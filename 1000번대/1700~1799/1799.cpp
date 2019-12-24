#include <iostream>
using namespace std;
int n,a[30][30],b[11][11],h[30],cnt,maxx;
int solve(int lv)
{
    if(lv==2*n)
    {
        if(cnt>maxx)
            maxx=cnt;
        return 0;
    }
    int t=0;
    for(int i=1; i<=2*n-1; i++)
    {
        if(h[i]==0 && a[lv][i]==1)
        {
            t=1;
            h[i]=1;
            cnt++;
            solve(lv+1);
            cnt--;
            h[i]=0;
        }
    }
    if(!t)
        solve(lv+1);
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>b[i][j];
            if((i+j-1)%2==0)
            {
                if(j<=(i+j-1)/2)
                    a[i+j-1][n-((((i+j-1)/2)-j+1)*2-1)]=b[i][j];
                else
                    a[i+j-1][n+(j-(i+j-1)/2)*2-1]=b[i][j];
            }
            else
            {
                if(j==(i+j-1)/2+1)
                    a[i+j-1][n]=b[i][j];
                else
                    a[i+j-1][n+((j-((i+j-1)/2+1))*2-1)+1]=b[i][j];
            }
        }
    }

    solve(1);
    cout<<maxx<<endl;
    return 0;
}
