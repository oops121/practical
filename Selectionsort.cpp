#include<iostream>
using namespace std;
#define size 10
int n;
template <class T>
void selectionsort(T A[size])
{
	int i,j,min;
	T temp;
	for (i=0;i<=n;i++)
	{
		min=i;
		for (j=i;j<n;j++)
		{
			if (A[j]<A[min])
			min=j;
		}  
		
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
		
	}
	cout<<"\n The sorted list is \n";
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<A[i];
	}
}
int main()
{
	int A[size];
	float B[size];
	int i;
	cout<<"\n\t\t Selection Sort\n";
	cout<<"\n\t Handeling integer element";
	cout<<"\n how many elements are there?";
	cin>>n;
	cout<<"\n enter the integer element\n";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		
	}
	selectionsort(A);
	cout<<"\n\n\t Handeling Float elements";
	cout<<"\n\t how many elements are there?";
	cin>>n;
	cout<<"\nEnter the float elements\n";
	for(i=0;i<n;i++)
	{
		cin>>B[i];
		
	}
	
	selectionsort(B);
	cout<<"\n";
	return 0;
	
}
