#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    long long a=1;
    for(int i=k+1; i<=n; i++)
        a*=i;
    long long b=1;
    for(int i=1; i<=n-k; i++)
        b*=i;
    cout<<a/b<<endl;
}
