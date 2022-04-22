#include<bits/stdc++.h>
using namespace std;

// TODO: find how to access the last element of the string vector
// solution: use iterators
int main(){
    int t=1, ct=0;
    // cin>>t;
    int m=1, n=4;
    // cin>>m>>n;
    string a="DDDC";
    // vector<string> s;
    // s.push_back(a);
    // cout<<s[0].replace(3,1,"f")<<endl;
    // char f=s[0].at(3);
    // cout<<s[0].length();
    
    vector<string> s[m];
    for(int i=0; i<m; i++){
        // cin>>a;
        s[i].push_back(a);
        // cout<<"HERE "<<s[i]<<endl;
    }
    for(auto f : s){
        // cout<<f<<" ";
        //work
    }
    /*
    for(int i=0; i<(s[m-1].size()-1); i++){
        string ch = s[0].at(i);
        if(ch=="D"){
            ct++;
        }
    }
    // cout<<s[0].at(1);
    /*
    for(int i=0; i<m-1; i++){
        if(s[i][n-1]=="R"){
            ct++;
        }
    }
         /*   for(int j=0; j<n-1; j++){
                if(s[m-1][j]=="D")
                    ct++;
            }
    */
    cout<<ct<<endl;

    return 0;
}