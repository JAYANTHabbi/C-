#include<iostream>
using namespace std;
class Book{
private:
	string name;
	int cost;
	public:
		Book(string n,int c){
			name=n;
			cost=c;
			cout<<"constructor called  for"<<name<<endl;
		}
		~Book()
		{
			cout<<"destructor called for"<<name<<endl;
		}
		void displayInfo(){
			cout<<"name"<<name<<",cost"<<cost<<endl;
		}
};
int main()
{
	Book book1("civil war",30);
    Book book2("mitti", 20);
    book1.displayInfo();
    book2.displayInfo();
    return 0;
}
