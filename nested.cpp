#include<iostream>
using namespace std;
class University
{
	private:
		string university_name;
	public: 
	void setdata()
	{
		cout<<"ENTER THE UNIVERSITY NAME:  "<<endl;
		cin>>university_name;
	}
	void printdata()
	{
		cout<<"UNIVERITY:   "<<university_name<<endl;
	}
	class soe
	{
		private:
		string school_name;
	
	public: 
	void setdata()
	{
		cout<<"ENTER THE SCHOOL NAME:  "<<endl;
		cin>>school_name;
	}
	void printdata()
	{
		cout<<"SCHOOL:   "<<school_name<<endl;
	}
			
	};
		
};
int main()
{
	University obj1;
	obj1.setdata();
	obj1.printdata();
	University::soe obj2;
	obj2.setdata();
	obj2.printdata();
}
