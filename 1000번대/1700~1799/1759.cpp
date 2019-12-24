#include <iostream>
#include <algorithm>
using namespace std;
int l,c;
char ch[15],as[15];
bool cmp(char a, char b)
{
    return a<b;
}
int solve(int lv, int cnt, int b, int a)
{
    if(cnt==0)
    {
        if(b>=2 && a>=1)
            cout<<ch<<endl;
        return 0;
    }
    if(lv>c)
        return 0;
    ch[l-cnt]=as[lv];
    if(as[lv]=='a'||as[lv]=='e'||as[lv]=='u'||as[lv]=='i'||as[lv]=='o')
        solve(lv+1,cnt-1,b,a+1);
    else
        solve(lv+1,cnt-1,b+1,a);
    solve(lv+1,cnt,b,a);
}
int main()
{
    cin>>l>>c;
    for(int i=1; i<=c; i++)
        cin>>as[i];
    sort(as+1,as+c+1,cmp);
    solve(1,l,0,0);
    return 0;
}
