#include <bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    // int d, f;
    cin>>a>>b;
    int c[a.length()];
    for(int i=a.length()-1; i>=0; i--){
        int d=a[i]-'0';
        int f=b[i]-'0';
        cout<<"d = "<<d<<"f = "<<f<<endl;
        if(d!=f){
            c[i] = 1;
        }
        else{
            c[i] = 0;
        }
    }
    for(int i=0; i<a.length(); i++)
        cout<<c[i];
    cout<<endl;

    return 0;
}