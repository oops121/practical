#include<iostream> //standard input output header file
#include<stdexcept> //for handling exception
#include<typeinfo> //for variable datatype identification
#include<string> //string comparison purpose
#include<cstring> //for string manipulation in c/c++ for various fun. and array

using namespace std;

int main()
{
int i,n,age; //variable declaration
char car;
double income;
char city[20];

cout<<"\n Enter Age of person:";
cin>>age;
 try
{
 if(age<18||age>55) 
 throw runtime_error("\n Age is not between 18-55");
}
 catch(const exception& e)
{
  cout<<"Caught exception:"<<e.what()<<'\n';
}

cout<<"\n Enter income of person:";
cin>>income;
 try
{
 if(income<50000||income>100000) 
 throw runtime_error("\n Income is not int the range of 50000-100000");
}
 catch(const exception& e)
{
  cout<<"Caught exception:"<<e.what()<<'\n'; 
}

cout<<"\n Enter city of person:";
cin>>city;
 try
{
 if(strcmp(city, "Pune")&& strcmp(city, "Banglore")&& strcmp(city,"Chennai")&& strcmp(city, "Mumbai")) 
 throw runtime_error("\n Person is not staying in Pune/Mumbai/Banglore/Chennai");
}
 catch(const exception& e)
{
  cout<<"Caught exception:"<<e.what()<<'\n';
}

cout<<"\n Whether person holds car or not? (y/n):";
cin>>car; 
 try
{
 if(car=='n')
 throw runtime_error("\n Person should hold car");
}
 catch(const exception& e)
{
  cout<<"Caught exception:"<<e.what()<<'\n';
}

cout<<"\n Information of person is as follows:";
cout<<"\n Age:"<<age;
cout<<"\n Income:"<<income;
cout<<"\n Location:"<<city;
cout<<"\n Holding car or not?:"<<car;

return 0;
}
