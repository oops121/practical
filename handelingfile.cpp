#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("filehand.txt",ios::out);
	
	if(!file)
	{
		cout<<"error in creating file:"<<endl;
		return 0;
		
	}
	cout<<"file created sucessfully"<<endl;
	file<<"Hello";
	
	file.close();
	
	file.open("filehand.txt",ios::in);
	
	if(!file)
	{
		cout<<"error in opening the file"<<endl;
		return 0;
	}
	char ch[0];
	cout<<"file content:"<<endl;
	
	while(!file.eof())
	{
		file>>ch;
		cout<<ch<<endl;
	}
	
	file.close();
	cout<<"file closed!!!";
	
	return 0;
	
}
