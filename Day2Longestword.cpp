#include<iostream>
using namespace std;
string longestWord(string c)
{
	int k,cnt,max=0,start;
	for(int i=0;c[i]!='\0';i++)
	{
		cnt++;
	}
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]!=' ')
		{
			k++;
		}
		if(c[i]==' ')
		{
			if(max<k)
			{
				max=k;
				start=i-max;
			}
			k=0;
		}
		if(i==cnt-1)
		{
			if(max<k)
			{
				max=k;
				start=i-max+1;
			}
			k=0;
		}
		
	}
	for(int i=start;i<start+max;i++)
	{
		cout<<c[i];
	}
	
}
int main()
{
	string c;
	getline(cin,c);
	longestWord(c);
}
