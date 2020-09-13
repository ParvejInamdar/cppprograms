#include<iostream>
using namespace std;
string palindrome(string ab)
{
	int cnt,flag=0;
	for(int i=0;ab[i]!='\0';i++)
	{
		cnt++;
	}
	int j=cnt-1,i=0;
	while(i<=j)
	{
		if(ab[i]==ab[j])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
		i++;j--;
	}
	if(flag)
	{
		cout<<"String is Palindrome";
	}
	else
	{
		cout<<"String is not palindrome";
	}
}
int main()
{
	string a;
	getline(cin,a);
	palindrome(a);
}
