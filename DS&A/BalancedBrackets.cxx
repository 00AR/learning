#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter brackets: ";
	vector<char> stak;
	cin>>str;
	
	for(size_t i=0; i<str.length(); i++){
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
			stak.push_back(str[i]);
		else{
			if(((int)stak.back()+1)==((int)str[i]) || ((int)stak.back()+2)==((int)str[i]))
				stak.pop_back();
		}
	}
	stak.size() ? cout<<0 : cout<<1;
	return 0;
}
// () 40 41
// [] 91 93
// {} 123 125
