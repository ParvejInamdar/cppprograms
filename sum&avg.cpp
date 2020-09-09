#include<iostream>
#include<climits>
using namespace std;
void sumavg(int arr[],int size)
{
	int sum=0,avg=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum : "<<sum;
	cout<<"\nAverage : "<<(sum/size);
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
	sumavg(p,size);
	delete [] p;
}
