#include<iostream>
#include<string>
using namespace std;
void pattern(string p,string s)
{
	if(s.empty())
	{
		cout<<p;
		return;
	}
	char c=s.at(0);
	pattern(p+c,s.substr(1));
	pattern(p,s.substr(1));
}
int main()
{
	pattern(" ","abc");
}
