#include<iostream>
#include<string>
using namespace std;

int main()
{
int cnt=0;
string s="";
cin>>s;
int l=s.size();
for(int i=0;i<l;i++)
	{
	for(int j=i+1;j<l;j++)
		{
		if(s[i]!=s[j])
			{
			s+=s[i];
			}
		}
	}
if(s=="")
	cout<<"Empty String\n";
cout<<s;
}
