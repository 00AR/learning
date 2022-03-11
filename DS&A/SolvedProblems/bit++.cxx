#include <iostream>
#include <string>
using namespace std;

/*
 Question: user can perform only two operations increment by 1 or
 * decrement by 1. print the result after n number of operations 
 */

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

//Editorial solution
/*
 #define all(x) x.begin(), x.end();
 vector<string> v(n);
 for(int i=0,i<n;i++)
	cin>>v[i];
 cout<<count(all(x),"++X")+count(all(x),"X++")-count(all(x),"--X")-count(all(x),"X--")<<endl;
 */

