#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
		string Name;
		int ID;
		int salary;
		static int count;
	public:
		Employee(string N,int I,float S)
		{
			Name=N;
			ID=I;
			salary=S;
			count++;
		}
		static int getcount()
		{
			return count;
		}
		void SHOW()
		{
			cout<<"Name:\t"<<Name<<"ID:\t"<<ID<<"Salary:\t"<<salary<<endl;
		}
};
int Employee::count=0;

int main()
{
	Employee E[4]={Employee("ali",44,3500.4),Employee("ayan",33,45.77),Employee("TUFAIL",245,99.999),Employee("haris",888,6565.56)};
	for(int i=0;i<4;i++)
	{
		E[i].SHOW();
	}
	cout<<endl;
	cout<<"TOTAL EMPLOYEE NUMBERS:\t"<<Employee::getcount()<<endl;
}
