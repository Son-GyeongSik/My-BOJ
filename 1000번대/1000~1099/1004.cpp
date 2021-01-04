#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        int cnt=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            int c1,c2,r;
            cin>>c1>>c2>>r;
            double dist1,dist2;
            dist1=sqrt(pow(x1-c1,2)+pow(y1-c2,2));
            dist2=sqrt(pow(x2-c1,2)+pow(y2-c2,2));
            if(dist1<=r && dist2>r)
                cnt++;
            if(dist1>r && dist2<=r)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}