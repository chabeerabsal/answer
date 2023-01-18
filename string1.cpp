#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="Abcd";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		cout<<"no";
	}
	cout<<"yes";
}
