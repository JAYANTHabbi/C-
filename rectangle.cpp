#include<iostream>
using namespace std;
class Rectangle{
private:
	string length;
	int breadth;
	public:
		Rectangle(int l,int b){
			length=l;
			breadth=b;
			cout<<"constructor called  for"<<breadth<<endl;
		}
		~Rectangle()
		{
			cout<<"destructor called for"<<breadth<<endl;
		}
		void displayInfo(){
			cout<<"length"<<length<<",breadth"<<breadth<<endl;
		}
};
int main()
{
	Rectangle rectangle1(2,3);
    Rectangle rectangle2(3,2);
    rectangle1.displayInfo();
    rectangle2.displayInfo();
    return 0;
}
