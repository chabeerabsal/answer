#include<iostream>
#include<string>
#include<vector>
using namespace std;
//vector<string>o;
vector<string>pattern(string p,string s)
{
	if(s.empty())
	{
	vector<string>o;
	 o.push_back(p);
	return o;   
	}
	char c=s.at(0);
     vector<string>s1=pattern(p+c,s.substr(1));
    vector<string>s2=pattern(p,s.substr(1));
s1.insert(s1.end(),s2.begin(),s2.end());
return s1;   
	
}
int main()
{
	//vector<string>o;
   vector<string>o=pattern(" ","abc");
   for(int i=0;i<o.size();i++)
   cout<<o[i];
}
