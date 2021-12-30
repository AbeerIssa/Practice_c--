
#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int u,a,t,v,s;
	cout<<"\n Enter the Intial Velocity (u) :";
	cin>>u;
	cout<<"\n Enter the Acceleration (a) :";
	cin>>a;
	cout<<"\n Enter the Time elapased (t) :";
	cin>>t;
	v=u+a*t;
	s=u*t+0.5*a*t*t;
	cout<<"\n The Final Velocity (v) is : "<<v<<" m/s ";
	cout<<"\n The Distance traveled (s) is : "<<s<<" m/s ";
	getch();
	return 0;
}