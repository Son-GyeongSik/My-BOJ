#include <iostream>
using namespace std;
int a,b,c;
int f(int lv)
{
    if(lv>10)
        return 0;
    c*=10;
    cout<<c/b;
    c%=b;
    f(lv+1);
}
int main()
{

    cin>>a>>b;
    cout<<a/b<<".";
    c=a%b;
    f(1);
    return 0;
}
