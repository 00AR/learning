#include <iostream>
using namespace std;

class Over{
	int a;
	public:
		void setNumber(int a){
			this->a = a;
		}
		int getNumber(){
			return a;
		}
};

bool operator !(Over ob){
	return (ob.getNumber()%2 == 0);
}

int main(int argc, char **argv)
{
	Over obj;
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	obj.setNumber(num);
	
	!obj ? cout<<"Even Number": cout<<"Odd number";
	
	return 0;
}

