#include<bits/stdc++.h>
using namespace std;

int vis[300001];
queue<int> q;
queue<int> lv;

int main()
{
	int n, k;
	scanf("%d%d",&n,&k);
	q.push(n);
	lv.push(0);
	if(n==k)
	{
		cout<<"0"<<endl;
		return 0;
	}
	vis[n]=1;
	while(!q.empty())
	{
		if(q.front()<k && !vis[2*q.front()])
		{
			q.push(2*q.front());
			lv.push(lv.front()+1);
			vis[2*q.front()]=1;
			if(q.back()==k)
				break;
		}
		if(q.front()<k && !vis[q.front()+1])
		{
			q.push(q.front()+1);
			lv.push(lv.front()+1);
			vis[q.front()+1]=1;
			if(q.back()==k)
				break;
		}
		if(q.front()>=1 && !vis[q.front()-1])
		{
			q.push(q.front()-1);
			lv.push(lv.front()+1);
			vis[q.front()-1]=1;
			if(q.back()==k)
				break;
		}
		q.pop();
		lv.pop();
	}
	cout<<lv.back()<<endl;
	return 0;
}