#include<iostream>
#include<string.h>
using namespace std;

int main(){
    //'0'=48, '1'=49, '9'=57
    string s;
    int a[4]={-1,0,0,0}, j=1;
    // s="1+1+3+1+3";
    cin>>s;
    //s.replace(0,1,to_string(9));
    cout<<s<<endl;
    for(int i=0; i<s.length();i+=2){
        a[(int)s[i]-(int)'0']+=1;
        //cout<<a[((int)s[i]-(int)'0')]<<endl;
    }
    // cout<<s<<endl;
    for(int i=1;i<4;i++){
         for(int k=0;k<a[i];k++){
             if(j<=s.length()){
                s.replace(j-1,1,to_string(i));
                j+=2;
            }
        }
    }

    cout<<s;
    return 0;
}