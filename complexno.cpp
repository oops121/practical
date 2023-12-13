#include<iostream>
using namespace std;

class ComplexNumber
{
	public:
	int real,img,real1,img1,real2,img2;
	
	public:
		void Acceptcomplexnumber()
		{
			cout<<"enter the real part of first complex number :"<<endl;
			cin>>real1;
			cout<<"enter the img part of first complex number :"<<endl;
			cin>>img1;
			cout<<"first complex number is:"<<real1<<"+"<<img1<<"i"<<endl;
			
			
			
			cout<<"enter the real part of second complex number :"<<endl;
			cin>>real2;
			cout<<"enter the img part of second complex number :"<<endl;
			cin>>img2;
			cout<<"second complex number is:"<<real2<<"+"<<img2<<"i"<<endl;
			
		}
		
		void additionofcomplexnumber()
		{
			real=real1+real2;
			img=img1+img2;
			
			cout<<"Addition of the complex number is:"<<real<<"+"<<img<<"i"<<endl;
		}
		
		void multiplicationofcomplexnumber()
		{
			
			real=(real1*real2)-(img1*img2);
			img=(real1*img2)+(real2*img1);
			
			cout<<"multiplication of the complex number is:"<<real<<"+"<<img<<"i"<<endl;
		}
	
};

int main()
{
	ComplexNumber o1;
	o1.Acceptcomplexnumber();
	o1.additionofcomplexnumber();
	o1.multiplicationofcomplexnumber();
	
	return 0;
	
}
