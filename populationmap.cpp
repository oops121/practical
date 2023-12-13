#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	typedef map<string,int> mapType;
	mapType populationMap;
	populationMap.insert(pair<string, int> ("Maharastra",1000173));
	populationMap.insert(pair<string, int> ("Haryana",700000));
	populationMap.insert(pair<string, int> ("Madhya Pradesh",800000));
	populationMap.insert(pair<string, int> ("Uttar Pradesh",13000000));
	populationMap.insert(pair<string, int> ("Punjab",500000));
	mapType::iterator iter;
	cout<<"-----------------population of states in india-------------------------\n";
	cout<<"\n size of populationMap"<<populationMap.size()<<"\n";
	string statename ;
	cout<<"enter name of the state:";
	cin>>statename ;
	iter = populationMap.find(statename);
	if (iter!= populationMap.end() )
	cout<<statename<<" 's population is:"<<iter->second ;
	
	else
	cout<<"key is not populationMap"<<"\n";
	populationMap.clear();
	
}
