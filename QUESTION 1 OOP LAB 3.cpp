#include<iostream>
using namespace std;

class student{
	private:
	 string name;
	 int age;
	public:
	
		void getInput()
		{
			string n;
			int A;
			n=name;
			A=age;
		cout<<"enter your name :";
			cin>>name;
			cout<<"enter your age :";
			cin>>age;	
		}
		 void display(){
 cout<<"student name : "<<name<<" age : "<<age<<endl;
 }
	
		
};

  
  int main(){
  	student Student[4];
  	for(int i=0;i<4;i++)
  	{
  		cout<<"student no :"<<i+1<<" detail"<<endl;
  		Student[i].getInput();
  		
	  }
  	for(int i=0;i<4;i++)
  	{
  		cout<<"student no :"<<i+1<<" detail"<<endl;
  		Student[i].display();
  		
	  }
	  
  	
  }