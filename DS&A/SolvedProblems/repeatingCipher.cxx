#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1,i=0,t;
    cin>>t;
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<s<<endl;
    }
    else{
        while(i<s.length()){
            cout<<s[i];
            i=i+n;
            n++;
        }
       cout<<endl;
    }
    return 0;
}