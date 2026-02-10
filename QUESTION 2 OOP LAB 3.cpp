#include<iostream>
using namespace std;
class employee{
	public:
		string name;
		static int count;
		employee()
		{
			count++;
			name="kharif";
		}
		void show(){
			
			cout<<"name is : "<<name<<endl;
		}
	static int counter()
		{
			return count;
		}
};
	int employee::count=0;	
int main(){

	employee a[5];
	for(int i=0;i<5;i++)
	{
		a[i].show();
		cout<<"count of employee is :"<<employee::counter();
	}
}