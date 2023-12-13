#include<iostream>   //including header files
#define size 10
using namespace std;  //standard library
int n;
template<class T>  //template class
void selection(T A[size]) //function declearation
{ 
    int i,j,min;
    T temp;
    for(i=0;i<=n-2;i++)
{   min=i;
    for(j=i+1;j<=n-1;j++)
{   if(A[j]<A[min])
    min=j;
}         
         
          temp=A[i];
          A[i]=A[min];
          A[min]=temp;
}
    cout<<"\n The sorted list is:...\n";  //printing sorted array of integer & float nos.
    for(i=0;i<n;i++)
    cout<<"\t"<<A[i];
}
    int main()    //initializing main function
{   
    int i,A[size];  //declear variable of type integer
    float B[size];  //declear variable of type float
 cout<<"\n\t\tSelection Sort\n";
 cout<<"\n\tHandling Interger Elements\n";
 cout<<"\nHow Many Elements Are There???\n";
 cin>>n;    
 cout<<"\nEnter the integer numbers";
 
 for(i=0;i<n;i++)
 cin>>A[i];   //scanning array of integer nos 
 selection(A);

 cout<<"\n\t\tHandling Float Elements\n";
 cout<<"\nHow Many Elements Are There???\n";
 cin>>n;    
 cout<<"\n Enter the Float numbers";
 for(i=0;i<n;i++)
 cin>>B[i];   //scanning array of float nos
 selection(B);
 cout<<"\n";
return 0;
}
