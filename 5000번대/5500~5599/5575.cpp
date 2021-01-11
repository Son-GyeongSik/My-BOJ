#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
	int a,b,c,d,e,f;
	int g,v,i,j,k,l;
	int x,n,o,p,q,r;
	cin>>a>>b>>c>>d>>e>>f;
	cin>>g>>v>>i>>j>>k>>l;
	cin>>x>>n>>o>>p>>q>>r;
	int h,m,s;
	s=f-c;
	if(s<0)
	{
		e--;
		s+=60;
	}
	m=e-b;
	if(m<0)
	{
		d--;
		m+=60;
	}
	h=d-a;
	cout<<h<<" "<<m<<" "<<s<<endl;
	s=l-i;
	if(s<0)
	{
		k--;
		s+=60;
	}
	m=k-v;
	if(m<0)
	{
		j--;
		m+=60;
	}
	h=j-g;
	cout<<h<<" "<<m<<" "<<s<<endl;
	s=r-o;
	if(s<0)
	{
		q--;
		s+=60;
	}
		
	m=q-n;
	if(m<0)
	{
		p--;
		m+=60;
	}
	h=p-x;
	cout<<h<<" "<<m<<" "<<s<<endl;
	return 0;
}
