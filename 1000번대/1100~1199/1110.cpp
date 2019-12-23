#include <iostream>
using namespace std;
int main()
{
    int g,n,cnt=0;
    cin>>n;
    g=n;
    while(1)
    {
        int q=0;
        q+=(g%10)*10;
        int x=0,s=g;
        while(s>=1)
        {
            x+=s%10;
            s/=10;
        }
        q+=(x%10);
        cnt++;
        g=q;
        if(g==n)
            break;
    }
    cout <<cnt<< endl;
    return 0;
}
