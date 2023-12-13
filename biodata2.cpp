#include<iostream>
#include<conio.h>

using namespace std;

class Personalinfo
{
	protected:
	char name[20];
	public:
	void getperinfo();	
	
};

class Professionalinfo
{
	protected:
	char comp_name[20];
	public:
	void getprofessionalinfo();	
	
};

class Academicinfo
{
	protected:
	int marks;
	public:
	void getacademicinfo();
	
};

class Biodata: public Personalinfo, public Professionalinfo, public Academicinfo

{
	public:
	void display();
		
};

void Personalinfo::getperinfo()
{
	cout<<"enter your name:";
	cin>>name;
}

void Professionalinfo::getprofessionalinfo()
{
	cout<<"enter your company name:";
	cin>>comp_name;
}

void Academicinfo::getacademicinfo()
{
	cout<<"Enter your 12th standard percentage:";
	cin>>marks;
}

void Biodata::display()
{
	cout<<"---------Your Information-------------"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Company name:"<<comp_name<<endl;
	cout<<"12th percentage:"<<marks<<endl;	
}

int main()
{
	
	Biodata o1;
	o1.getperinfo();
	o1.getprofessionalinfo();
	o1.getacademicinfo();
	o1.display();
	
	return 0;
}
