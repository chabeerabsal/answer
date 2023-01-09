#include<iostream>
using namespace std;
void pattern(int n,int a)
{
	if(n<=1)
	return;
	if(n>a)
	{
		pattern(n,a+1);
		cout<<"*"<<" ";
	}
	else
	{
		pattern(n-1,0);
		if(n!=0)
		cout<<endl;
	}
}
int main()
{
	pattern(4,0);
}
