#include<iostream>
using namespace std;

string firstoccurance(string s,string s1)
{
	int max=0,j=0;
	for(int i=0;s[i]!='\0';i++)
	{
		max=i-j;
		if(s[i]==s1[j])
		{
			j++;
			if(s1[j]=='\0')
			{
				break;
			}
		}
		else
		{
			j=0;
		}
	}
	cout<<s1<<" : "<<max;
}


int main()
{
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	firstoccurance(s,s1);
}
