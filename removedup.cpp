#include<iostream>
#include<climits>
using namespace std;
int removeduplicate(int arr[],int size)
{
	if(size==0)
	{
		cout<<"Array size is 0";
	}
	int a=size-1;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<size-1;k++)
				{
					arr[j]=arr[k];	
				}	
				arr[a]=0;
				a--;
			}
		}
	}
	for(int i=0;i<=a;i++)
	{
		cout<<arr[i]<<"\t";
	}
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
	removeduplicate(p,size);
	delete [] p;
}

