#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
		static int count;
		student(string n,int r)
		{
			count++;
			name=n;
			roll=r;
		}
		void show(){
			
			cout<<"name is : "<<name<<", and roll number "<<roll<<endl;
		}
	static int counter()
		{
			return count;
		}
};
	int student::count=0;	
int main(){

	student a[5]={{"eer",33},{"frr",33},{"34343",33},{"rtt",33},{"334",333}};
	
	for(int i=0;i<5;i++)
	{
		a[i].show();
		cout<<"\n";
	}
		cout<<"total number of student  is :"<<student::counter();
}