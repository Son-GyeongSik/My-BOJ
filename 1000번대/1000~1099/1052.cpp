#include<iostream>
using namespace std;

int count_bit (int a)
{
    int cnt=0;
    while(a>0)
    {
        cnt+=(a%2);
        a/=2;
    }
    return cnt;
}

int main()
{
    int n, k;
    cin>>n>>k;
    
    if(count_bit(n) <= k)
    {
        cout<<"0"<<endl;
        return 0;
    }

    int target = count_bit(n)-k;
    int arr[100] = {0,};
    int cnt=0;
    for(int i=0; true; i++)
    {
        cnt++;
        arr[i]=n%2;
        n/=2;
        if(n==0)
            break;
    }

    int ans=0;
    int val=1;

    for(int i=0; i<cnt; i++)
    {
        if(arr[i]==2)
        {
            target--;
            arr[i+1]++;
            arr[i]=0;
        }
        if(arr[i]==1)
        {
            ans+=val;
            arr[i]=0;
            arr[i+1]++;
        }
        val*=2;
        if(target==0)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}