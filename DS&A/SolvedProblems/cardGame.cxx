#include<iostream>
using namespace std;

int main(){
    int j=0;
    string str, s;
    // cout<<str;
    // str="AS";
    cin>>str;
    for(int i=0;i<5;i++){
        cin>>s;
        if(str[0]==s[0]||str[1]==s[1]){ 
            j=1;
        } 
    }
    if(j)
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}