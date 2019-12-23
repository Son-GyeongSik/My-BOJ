#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a, b;
        int sum=1;
        cin>>a>>b;
        for(int i=1; i<=b; i++)
        {
            sum*=a;
            sum%=10;
        }
        if(sum==0)
            cout<<"10"<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
