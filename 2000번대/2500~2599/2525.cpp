#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int h,m,t;
	cin>>h>>m>>t;
	m+=t;
	h+=m/60;
	m=m%60;
	h%=24;
	cout<<h<<" "<<m<<endl;
	return 0;
}	
