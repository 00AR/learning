#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	string v;
	string str;
	string vowels = "AEIOUYaeiouy";
	vector<char> vw(vowels.begin(), vowels.end());
	cin>>str;
	vector<char> s(str.begin(), str.end());
	for( char &st: s){
		//cout<<"o "<<st<<endl;
		for(char &vwl: vw){
			if(st==vwl){
				//cout<<"in\n";
				st=0;
			}
		}
	}
	for(auto &ch: s){
		if(ch){
			if((int)ch<91)
			{
				ch = (char)((int)ch+32);
			}
			v.push_back('.');
			v.push_back(ch);
		}
	}
	cout<<v;
	return 0;
}

/*better
 
 string s;
 cin>>s;
 string ans;
 string vowel={...};
 for(char ch:s){
	if(!count(vowel.begin(), vowel.end(), ch){
		ans+='.';
		if(isupper(ch))
			ans+=tolower(ch);
		else
			ans+=ch;
	}
 }
 cout<<ans;
 */
