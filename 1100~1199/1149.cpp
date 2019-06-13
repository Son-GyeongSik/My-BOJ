#include <iostream>
using namespace std;
int a[1001][4],n;
int data[1001][4];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=3; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=3; j++)
        {
            data[i][j]=999999999;
            for(int k=1; k<=3; k++)
            {
                if(j!=k)
                {
                    if(data[i][j]>a[i][j]+data[i-1][k])
                        data[i][j]=data[i-1][k]+a[i][j];
                }
            }
        }
    int maxx=99999999;
    for(int i=1; i<=3; i++)
        if(data[n][i]<maxx)
            maxx=data[n][i];
    cout << maxx << endl;
    return 0;
}