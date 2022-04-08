#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin>>t;
    string s="22";
    int m;
    while(t--){
        cin>>s;
        m=s.length();
        cout<<((s[0]-'1')*10)+(m*(m+1)/2);
    }

    return 0;
}