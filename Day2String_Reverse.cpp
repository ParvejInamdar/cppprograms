#include<iostream>
using namespace std;

string reverse1(string s)
{
	int start=0,cnt=0;
	for(int i=0;s[i]!='\0';i++)
	{
		cnt++;
	}
	int end=cnt-1;
	while(start<=end)
	{
		s[start] ^= s[end];
		s[end] ^= s[start];
		s[start] ^= s[end];
		start++;
		end--;
	}
	return s;
}

string reverse2(string s)
{
	int start=0,cnt=0;
	for(int i=0;s[i]!='\0';i++)
	{
		cnt++;
	}
	int end=cnt-1;
	while(start<=end)
	{
		char temp=s[start];
		s[start]=s[end];
		s[end]=temp;
		start++;
		end--;
	}
	return s;
	
}

int main()
{
	string s;
	getline(cin,s);
	cout<<reverse1(s)<<endl;
	cout<<reverse2(s);
}
