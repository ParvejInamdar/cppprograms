#include<iostream>
#include<climits>
using namespace std;
int slargest(int arr[],int size)
{
	int max=INT_MIN,smax=INT_MIN;
	for(int i=0;i<size;i++)
	{
		if(max<arr[i])
		{
			smax=max;
			max=arr[i];
		}
		if(arr[i]<max && arr[i]>smax)
		{
			smax=arr[i];
		}
	}
	return smax;
}
int main()
{
	int size;
	cout<<"Enter size of array\n";
	cin>>size;
	int *p=new int[size];   //Dynamically array is created in heap memory
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	cout<<"Second largest element is : "<<slargest(p,size);
	delete [] p;
}
