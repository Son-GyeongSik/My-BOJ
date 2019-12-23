#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,r1,r2;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        double dist;
        dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        if(dist==(double)0.0 && r1==r2)
            cout<<"-1"<<endl;
        else if((double)(r1+r2)==dist || (double)(r2-r1)==dist || (double)(r1-r2)==dist)
            cout<<"1"<<endl;
        else if((dist==(double)0.0 && r1!=r2) || (double)(r1+r2)<dist || (double)(r2-r1)>dist || (double)(r1-r2)>dist)
            cout<<"0"<<endl;
        else
            cout<<"2"<<endl;
    }
    return 0;
}
