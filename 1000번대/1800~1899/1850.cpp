#include <iostream>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if(a<b)
    {
        unsigned long long tmp=a;
        a=b;
        b=tmp;
    }
    if(b==0)
        return a;
    gcd(b,a%b);
}
int main()
{
    unsigned long long a,b;
    cin>>a>>b;
    unsigned long long c=gcd(a,b);
    for(int i=1; i<=c; i++)
        cout<<"1";
    cout<<endl;
    return 0;
}
