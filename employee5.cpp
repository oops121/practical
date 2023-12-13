#include<iostream>
using namespace std;

class personal
{
  public:
        
         char name[20];
         int age;
         int date,month,year;
         char gender;
          
         personal()
         {
           cout<<" Enter name :";
           cin>>name;
           cout<<" \n Enter age :";
           cin>>age;
           cout<<" \n Enter date of birth";
           cin>>date>>month>>year;
           cout<<"\n Enter gender(F/M)";
           cin>>gender;
         }
        
};

class professional
{
 public:

         int id;
         int d,m,y;
        
         professional()
         {
          cout<<"\n Enter ID number";
          cin>>id;
          cout<<"\n Enter date of joining";
          cin>>d>>m>>y;
         }

};

class academic
{
 public:
       
        char edu[20];
        char branch[20];
       
        academic()
        {
         cout<<"\n Enter education";
         cin>>edu;
         cout<<"\n Enter branch";
         cin>>branch;
        }
};


class all:public personal,public professional,public academic
{
    public:
        all()
        {
         cout<<"\n\tBIO DATA\n";
         cout<<"Personal data:";
         cout<<"\nname is "<<name<<"\n age is "<<age<<"\n Date of birth "<<date<<"/"<<month<<"/"<<year;
         cout<<"\n\nprofessional data:\n";
         cout<<"ID is "<<id<<"\n date of joining "<<d<<"/"<<m<<"/"<<y;
         cout<<"\n\nacademic data:\n";
         cout<<"Education is "<<edu<<"\n branch is "<<branch;
        }

};

int main()
{

  all obj;
  return 0;
}
