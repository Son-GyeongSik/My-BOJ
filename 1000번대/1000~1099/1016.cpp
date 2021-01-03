#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int arr[1000001];
int main()
{
    long long a,b;
    cin>>a>>b;
    int cnt=0;
    for(long long i=2; i*i<=b; i++)
    {
        long long st;
        long long n=i*i;
        long long ch;
        ch=a/n;
        if(a%n!=0)
            ch++;
        st=ch*n;
        while(st<=b)
        {
            arr[st-a]=1;
            st+=n;
        }
    }
    for(int i=0; i<=b-a; i++)
    {
        if(arr[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
}