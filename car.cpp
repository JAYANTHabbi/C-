#include<iostream>
using namespace std;
class Car{
private:
	string series;
	int cost;
	public:
		Car(string s,int c){
			series=s;
			cost=c;
			cout<<"constructor called  for"<<series<<endl;
		}
		~Car()
		{
			cout<<"destructor called for"<<series<<endl;
		}
		void displayInfo(){
			cout<<"series"<<series<<",cost"<<cost<<endl;
		}
};
int main()
{
	Car car1("five",30000000);
    Car car2("seven", 20000000);
    car1.displayInfo();
    car2.displayInfo();
    return 0;
}
