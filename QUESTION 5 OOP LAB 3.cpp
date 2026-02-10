#include<iostream>
using namespace std;
class Student
{
	private:
		int G[3];
	public:
		Student(int G1,int G2,int G3)
		{
			G[0]=G1;
		    G[1]=G2;
			G[2]=G3;
		}
		void SHOW(){
			cout<<"Grade 1.: "<<G[0]<<endl;
			cout<<"Grade 2: "<<G[1]<<endl;
			cout<<"Grade 3:\t"<<G[2]<<endl;
		}
};
int main()
{
	Student S[3]={Student(33,55,77),Student(66,67,88),Student(43,45,77) };
	for(int i=0;i<3;i++)
	{
		cout<<"Student"<<":0"<<i+1<<endl;
		 S[i].SHOW();
	}
	
	return 0;
}
