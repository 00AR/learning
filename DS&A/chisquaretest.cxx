#include <iostream>
#include <curses.h>
#include <iomanip>
using namespace std;

class Chisquare{
	int n, observed[20], i, N, Expected;
	float Calculation[20], finaL, critical;
	public:
		Chisquare(){
			N=0;
			finaL=0.00;
		}
		
		void getData(){
			cout<<"How many numbers: ?"<<endl;
			cin>>n;
			cout<<"Enter the observed frequency: "<<endl;
			for(int i=0; i<n; i++){
				cout<<"Enter "<<i+1<<"th number: ";
				cin>>observed[i];
			}
		}
		
		void calculation(){
			for(int i=0; i<n; i++){
				N=N+observed[i];
			}	
			Expected = N/n;
			for(int i=0; i<n; i++){
				Calculation[i] = (float) ((observed[i]-Expected)*(observed[i]-Expected))/Expected;
				finaL = finaL + Calculation[i];
			}
		}
		
		void display(){
			cout<<setw(5)<<"Sno";
			cout<<setw(5)<<"Oi";
			cout<<setw(5)<<"Ei";
			cout<<setw(22)<<"((Oi-Ei)*(Oi-Ei))/Ei \n";
			for(int i=0; i<n; i++){	
				cout<<setw(5)<<i+1;
				cout<<setw(5)<<observed[i];
				cout<<setw(5)<<Expected;
				cout<<setw(10)<<setprecision(2)<<Calculation[i]<<endl;
			}
			cout<<"----------------------------------------------------"<<endl;
			cout<<setw(10)<<N;
			cout<<setw(10)<<N;
			cout<<setw(15)<<finaL;
			cout<<"\n";
		}
		
		void conclusion(){
				cout<<"\n";
				cout<<"Enter the critical value:\n";
				cin>>critical;
				if(finaL<critical){
					cout<<"The test is accepted"<<endl;
				}
				else{
					cout<<"The test is rejected\n";
				}
			}
};

int main(int argc, char **argv)
{
	Chisquare c;
	c.getData();
	c.calculation();
	c.display();
	c.conclusion();
	
	return 0;
}

