#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> pattern(string p,string s,vector<string>&o)
{
	if(s.empty())
	{
	 o.push_back(p);
	return o;   
	}
	char c=s.at(0);
     pattern(p+c,s.substr(1),o);
    pattern(p,s.substr(1),o);
    return o;
	
}
int main()
{
	vector<string>o;
   pattern(" ","abc",o);
   for(int i=0;i<o.size();i++)
   cout<<o[i];
}
