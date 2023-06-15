#include<iostream>
using namespace std;

int arr[100001];
int acc[100001];

int main()
{
    int n;
    cin>>n;

    arr[0]=1;
    arr[1]=1;
    arr[2]=2;

    acc[0]=1;
    acc[1]=3;
    acc[2]=7;

    for(int i=3; i<=n; i++)
    {
        arr[i] = (acc[i-2]+arr[i-1])%9901;
        acc[i] = (acc[i-1]+(arr[i]*2))%9901;
    }

    cout<<acc[n]<<endl;
    return 0;
}