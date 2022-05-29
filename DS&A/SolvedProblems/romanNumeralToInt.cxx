#include <iostream>
using namespace std;

int isValid(string); // roman numeral valid or not
int RtoI(char);		// roman to integer converter

int main(int argc, char **argv)
{
	string str;
	int sum=0;
	//input
	cout<<"Enter the roman number: ";
	cin>>str;
	
	if(isValid(str)){
		
		for(size_t i=1; i<str.length();i+=2){
			if(RtoI(str[i])>RtoI(str[i-1]))
				sum = sum + RtoI(str[i])-RtoI(str[i-1]);
			else
				sum = sum + RtoI(str[i-1])+ RtoI(str[i]);
		}
		
		if(str.length()%2==1)
			sum+=RtoI(str[str.length()-1]);
			
		cout<<sum;
	}
	else
		cout<<"invalid";
	
	return 0;
}

int RtoI(char ch){
	
	switch(ch){
		case 'I': //number of rep=3
			return 1;
		case 'V'://number of rep=1 
			return 5;
		case 'X'://number of rep=9 
			return 10;
		case 'L': //number of rep=1
			return 50;
		case 'C': //number of rep=4
			return 100;
		case 'D': //number of rep=1
			return 500;
		case 'M': //number of rep=3
			return 1000;
		default: return 0;
	}
	return 0;
}

int isValid(string s){
	int limit[]={0,0,0,0,0,0,0,0};
	for(size_t i=0; i<s.length(); i++){
	  switch(s[i]){
		case 'I': 
		//number of repetition possible = 3
			if(limit[0]<3){
				limit[0]++;
				}
			else
				return 0;
			break;
		case 'V'://no of rep=1 
			if(limit[1]<1)
				limit[1]++;
			else
				return 0;
			break;
		case 'X'://no of rep=9 
			if(limit[2]<9)
				limit[2]++;
			else
				return 0;
			break;
		case 'L': //no of rep=1
			if(limit[3]<1)
				limit[3]++;
			else
				return 0;
			break;
		case 'C': //no of rep=4
			if(limit[4]<4)
				limit[4]++;
			else
				return 0;
			break;
		case 'D': //no of rep=1
			if(limit[5]<1)
				limit[5]++;
			else
				return 0;
			break;
		case 'M': //no of rep=3
			if(limit[6]<3)
				limit[6]++;
			else
				return 0;
			break;
		default: return 0;
	  }
	}
	return 1;
}
