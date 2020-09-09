#include<iostream>
#include<climits>
using namespace std;
int disjoint(int arr[],int size1,int arr1[],int size2)
{
	int ans;
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(arr[i]==arr1[j])
			{
				return -1;
			}
		}
	}
	return 1;
}

int main()
{
	int size,size2;
	cout<<"Enter size of array\n";
	cin>>size>>size2;
	int *p=new int[size];   //Dynamically array is created in heap memory
	cout<<"enter elements for first array:";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	cout<<"Enter elements for second array:";
	int *p1=new int[size2];   //Dynamically array is created in heap memory
	for(int i=0;i<size2;i++)
	{
		cin>>p1[i];
	}
	int x=disjoint(p,size,p1,size2);
	if(x==-1)
	{
		cout<<"arrays are not disjoint";
	}
	else
	{
		cout<<"array are disjoint";
	}
	delete [] p;
}
