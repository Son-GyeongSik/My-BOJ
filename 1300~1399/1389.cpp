#include <iostream>
using namespace std;
int c[101][101];
int main()
{
    int i,j,k;
    int v,e;
    cin>>v>>e;
    for(i=1; i<=v; i++)
        for(j=1; j<=v; j++)
                c[i][j]=1<<20;
    for(i=1; i<=e; i++)
    {
        int a, b;
        cin>>a>>b;
        c[a][b]=1;
        c[b][a]=1;
    }
    for(k=1; k<=v; k++)
    {
        for(i=1; i<=v; i++)
        {
            for(j=1; j<=v; j++)
            {
                if(c[i][j]>c[i][k]+c[k][j])
                    c[i][j]=c[i][k]+c[k][j];
            }
        }
    }
    int mx=1<<20,f;
    for(i=1; i<=v; i++)
    {
        int cnt=0;
        for(j=1; j<=v; j++)
        {
            cnt+=c[i][j];
        }
        if(cnt<mx)
        {
            mx=cnt;
            f=i;
        }
    }
    cout <<f<< endl;
    return 0;
}