#include<iostream>
using namespace std;

string countingChar(string s)
{
	int arr[256];
	for(int i=0;i<256;i++)
	{
		arr[i]=0;
	}
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			continue;
		}
		else
		{
			int asciinumber=s[i];
			arr[asciinumber]=arr[asciinumber]+1;	
		}
	}
	for(int i=0;i<256;i++)
	{
		if(arr[i]==0)
		{
			continue;
		}
		if(arr[i]!=0)
		{
			char a=i;
			cout<<a<<" : "<<arr[i]<<endl;
		}
	}
}


int main()
{
	string s;
	getline(cin,s);
	countingChar(s);
}
