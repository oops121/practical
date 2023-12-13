#include<iostream>
#include<string>
using namespace std;

class Book
{
	private:
		string author;
		string title;
		double price;
		string publisher;
		int stock;
		
	public:
		//constructor to initialize book details
	
	Book(string author,string title,double price,string publisher,int stock)
	{
		this->author=author;
		this->title=title;
		this->price=price;
		this->publisher=publisher;
		this->stock=stock;
		
	}		
	
	// member function to check avalibility and calculate cost
	bool checkAvaliability(int numCopies)
	{
		if(stock>=numCopies)
		{
			cout<<"Book details:"<<endl;
			cout<<"Author:"<<author<<endl;
			cout<<"Title:"<<title<<endl;
			cout<<"Price:"<<price<<endl;
			cout<<"Publisher:"<<publisher<<endl;
			
			double totalCost=price*numCopies;
			cout<<"Total cost for "<<numCopies<<" copy/copies:"<<totalCost<<endl;
			
			stock=numCopies;
			return true;
	    }
	    
	    else
	    {
	    	cout<<"required copies not in stock"<<endl;
	    	return false;	
		}		
	}
};

int main()
{
	Book book1("Author1","title1",20.0,"publisher1",10);	
	Book book2("Author2","title2",25.0,"publisher2",5);
	
	string title,author;
	cout<<"Enter book title:"<<endl;
	cin>>title;
	cout<<"Enter book author:"<<endl;
	cin>>author;
	
	//search for the requested book
	
	if(title=="title1"&&author=="Author1")
	{
		int numCopies;
		cout<<"Enter the number of copies required :";
		cin>>numCopies;
		book1.checkAvaliability(numCopies);
		
	}
	else if(title=="title2"&&author=="Author2")
	{
		int numCopies;
		cout<<"Enter the number of copies required:";
		cin>>numCopies;
		book2.checkAvaliability(numCopies);
		
	}
	
	else
	{
		cout<<"Book not found."<<endl;
		
	}
	return 0;

}

