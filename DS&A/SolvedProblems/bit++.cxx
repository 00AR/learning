#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int n, x=0;
	string s;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		if(s=="++X"||s=="++x"||s=="x++"||s=="X++")
			++x;
		else
			--x;
	}
	cout<<x;
	
	return 0;
}

