#include<iostream>
using namespace std;

class Calculator
{
	public:
		int a,b;
	public:
	
	    int accept()
		{ 
		cout<<"enter the value of first operand:"<<endl;
		cin>>a;
		cout<<"enter the value of second operand"<<endl;
		cin>>b;
		  }  
		int add()
		{
			return a+b;
		  }  
		 int sub()
		 {
		 	return a-b;
		  } 
		  int mult()
		  {
		  	return a*b;
		  }
		  int divide()
		  {
		  	return a/b;}	
	
};

int main()
{
	int result;
	int i;
	int op;
	i=1;
	Calculator a1;
	a1.accept();
	
	
	
	while(i==1){
	
	cout<<"***************menue***********************"<<endl;
	cout<<"press 1 for addition"<<endl;
	cout<<"press 2 for substraction"<<endl;
	cout<<"press 3 for multplication"<<endl;
	cout<<"press 4 for division"<<endl;
	cout<<"press 0 to exit"<<endl;
	cin>>op;
	
	switch(op)
	{
		case 1:
			{
		
			result=a1.add();
			cout<<"addition="<<result<<endl;
			break;
			}	
			
			case 2:
			{
		
			result=a1.sub();
			cout<<"subtraction="<<result<<endl;
			break;
			}	
			
			case 3:
			{
		
			result=a1.mult();
			cout<<"multiplication="<<result<<endl;
			break;
			}	
			
			
			case 4:
			{
		
			result=a1.divide();
			cout<<"division="<<result<<endl;
			break;
			}	
			
			default:
			{
				
			cout<<"invalid operator"<<endl;
			}
	}
			cout<<"press 1 to continue or press any key to exit"<<endl;
			cin>>i; 
			}			
	return 0;
	
}













