#include<iostream>
#include<string>
using namespace std;
class Book{
	private:
		 int ID;
		float Price;
		int Stock;
		static int Bcount;
	public:
		Book(const int I,const int P,const int S)
		{
			ID=I;
			Price=P;
			Stock=S;
			Bcount++;
		}
		static int getBcount()
		{
			return Bcount;
		}
		void Show()
		{
			cout<<"Book ID:"<<ID<<endl;
			cout<<"Price: "<<Price<<endl;
			cout<<"StocK:\t"<<Stock<<endl;
		}
};
int Book::Bcount=0;

int main()
{
	const int X=3;
	Book B[X]={Book(17,700,170),Book(17,50,95),Book(03,890,908)};
	for(int i=0;i<X;i++)
	{
		cout<<"Book : "<<i+1<<" Details:"<<endl;
		B[i].Show();
	}
	cout<<"Total Books Avaiable in library:"<<Book::getBcount();
}
