#include <bits/stdc++.h>
using namespace std;

//all permutations sorted in increasing lexicographic order

void solve(vector<string> s, vector<vector<string>>& ans, int index){
	if(index >= (int)s.size()){
		ans.push_back(s);
		return ;
	}
	for(auto j=index; j<(int)s.size(); j++){
		swap(s[index], s[j]);
		solve(s, ans, index+1);
		swap(s[index], s[j]);
	}
}

vector<vector<string>> permute(vector<string>& s){
	vector<vector<string>> ans;
	int index =0;
	solve(s, ans, index);
	return ans;
}


int main(){
	string str;
	cin>>str;
	
	vector<string> v;
	for(size_t i=0; i<str.length(); i++){
		string s(1,str[i]);
		v.push_back(s);
	}
	//cout<<v.size();
	vector<vector<string>> w;
	w=permute(v);
	for(auto const& i:w){
		for(auto const& a:i)
			cout<<a;
		cout<<", ";
	}
	
	return 0;
}
