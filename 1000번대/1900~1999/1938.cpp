#include <iostream>
#include <queue>
using namespace std;
struct wood{
    int d,x,y,lv;
}w[10001];
queue <wood> q;
int check[51][51][2],n,dx,dy,dd;
char data[51][51];
int dr[8]={-1,-1,0,1,1,1,0,-1};
int dc[8]={0,1,1,1,0,-1,-1,-1};
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            cin>>data[i][j];
            if(i>=2 && data[i][j]=='B' && data[i-1][j]=='B' && data[i-2][j]=='B')
            {
                wood tmp;
                tmp.d=0;
                tmp.x=i-1;
                tmp.y=j;
                tmp.lv=0;
                q.push(tmp);
                check[i-1][j][0]=1;
            }
            if(i>=2 && data[i][j]=='E' && data[i-1][j]=='E' && data[i-2][j]=='E')
            {
                dx=i-1;
                dy=j;
                dd=0;
            }
            if(j>=2 && data[i][j]=='B' && data[i][j-1]=='B' && data[i][j-2]=='B')
            {
                wood tmp;
                tmp.d=1;
                tmp.x=i;
                tmp.y=j-1;
                tmp.lv=0;
                q.push(tmp);
                check[i][j-1][1]=1;
            }
            if(j>=2 && data[i][j]=='E' && data[i][j-1]=='E' && data[i][j-2]=='E')
            {
                dx=i;
                dy=j-1;
                dd=1;
            }
        }
    while(!q.empty())
    {
        wood tmp;
        if(q.front().x>=3 && q.front().d==0 && check[q.front().x-1][q.front().y][0]==0 && data[q.front().x-2][q.front().y]!='1')
        {
            tmp.d=0;
            tmp.x=q.front().x-1;
            tmp.y=q.front().y;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x-1][q.front().y][0]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().x>=2 && q.front().d==1 && check[q.front().x-1][q.front().y][1]==0 && data[q.front().x-1][q.front().y]!='1' && data[q.front().x-1][q.front().y-1]!='1' && data[q.front().x-1][q.front().y+1]!='1')
        {
            tmp.d=1;
            tmp.x=q.front().x-1;
            tmp.y=q.front().y;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x-1][q.front().y][1]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().x<=n-2 && q.front().d==0 && check[q.front().x+1][q.front().y][0]==0 && data[q.front().x+2][q.front().y]!='1')
        {
            tmp.d=0;
            tmp.x=q.front().x+1;
            tmp.y=q.front().y;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x+1][q.front().y][0]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().x<=n-1 && q.front().d==1 && check[q.front().x+1][q.front().y][1]==0 && data[q.front().x+1][q.front().y]!='1' && data[q.front().x+1][q.front().y-1]!='1' && data[q.front().x+1][q.front().y+1]!='1')
        {
            tmp.d=1;
            tmp.x=q.front().x+1;
            tmp.y=q.front().y;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x+1][q.front().y][1]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().y>=3 && q.front().d==1 && check[q.front().x][q.front().y-1][1]==0 && data[q.front().x][q.front().y-2]!='1')
        {
            tmp.d=1;
            tmp.x=q.front().x;
            tmp.y=q.front().y-1;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x][q.front().y-1][1]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().y>=2 && q.front().d==0 && check[q.front().x][q.front().y-1][0]==0 && data[q.front().x][q.front().y-1]!='1' && data[q.front().x-1][q.front().y-1]!='1' && data[q.front().x+1][q.front().y-1]!='1')
        {
            tmp.d=0;
            tmp.x=q.front().x;
            tmp.y=q.front().y-1;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x][q.front().y-1][0]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().y<=n-2 && q.front().d==1 && check[q.front().x][q.front().y+1][1]==0 && data[q.front().x][q.front().y+2]!='1')
        {
            tmp.d=1;
            tmp.x=q.front().x;
            tmp.y=q.front().y+1;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x][q.front().y+1][1]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(q.front().y<=n-1 && q.front().d==0 && check[q.front().x][q.front().y+1][0]==0 && data[q.front().x+1][q.front().y+1]!='1' && data[q.front().x-1][q.front().y+1]!='1' && data[q.front().x][q.front().y+1]!='1')
        {
            tmp.d=0;
            tmp.x=q.front().x;
            tmp.y=q.front().y+1;
            tmp.lv=q.front().lv+1;
            q.push(tmp);
            check[q.front().x][q.front().y+1][0]=1;
            if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
            {
                cout<<q.back().lv<<endl;
                return 0;
            }
        }
        if(check[q.front().x][q.front().y][1-q.front().d]==0 && q.front().x>=2 && q.front().x<=n-1 && q.front().y>=2 && q.front().y<=n-1)
        {
            int i;
            for(i=0; i<8; i++)
            {
                if(data[q.front().x+dr[i]][q.front().y+dc[i]]=='1')
                    break;
            }
            if(i==8)
            {
                tmp.d=1-q.front().d;
                tmp.x=q.front().x;
                tmp.y=q.front().y;
                tmp.lv=q.front().lv+1;
                q.push(tmp);
                check[q.front().x][q.front().y][1-q.front().d]=1;
                if(q.back().x==dx && q.back().y==dy && q.back().d==dd)
                {
                    cout<<q.back().lv<<endl;
                    return 0;
                }
            }
        }
        q.pop();
    }
    cout<<"0"<<endl;
    return 0;
}
