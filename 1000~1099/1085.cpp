#include <iostream>
using namespace std;
int abs(int a)
{
    if(a<0)
        return -a;
    return a;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int minn=3000;
    if(minn>abs(a-c))
        minn=(abs(a-c));
    if(minn>a)
        minn=a;
    if(minn>abs(b-d))
        minn=abs(b-d);
    if(minn>b)
        minn=b;
    cout<<minn<<endl;
    return 0;
}
