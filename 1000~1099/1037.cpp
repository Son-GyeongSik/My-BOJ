#include <iostream>
using namespace std;
int main()
{
    int minn=2000000, maxx=-1;
    int n,a;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(minn>a)
            minn=a;
        if(maxx<a)
            maxx=a;
    }
    cout << minn*maxx << endl;
    return 0;
}
