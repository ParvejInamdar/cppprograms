#include<iostream>
#include<climits>
using namespace std;
void reverse(int arr[],int size)
{
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<"\t";	
	}
	delete [] arr;
}
int main()
{
	int size,ch;
	cout<<"Enter size of array\n";
	cin>>size;
	int *p=new int[size];   //Dynamically array is created in heap memory
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	reverse(p,size);
	delete [] p;
}
