#include <iostream>
using namespace std;
int main(void){
	int dividend, quotient, remainder, divisor;
	cout<<"Enter the number to be divided: ";
	cin>>dividend;
	cout<<"\nEnter the divisor: ";
	cin>>divisor;
	quotient = dividend/divisor;
	remainder = dividend%divisor;
	cout<<"\nQuotient: "<<quotient;
	cout<<"\nRemainder: "<<remainder;
	
}
