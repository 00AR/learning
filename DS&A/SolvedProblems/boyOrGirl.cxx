#include<iostream>
using namespace std;

int main(){
    int a[200], total=0;
    for(int i=0; i<123; i++){
        a[i]=0;
    }
    string str;
    cin>>str;
    //cout<<(int)'a';
    for(int i=0; i<str.length(); i++){
        a[(int)str[i]]+=1;
        // cout<<(int)str[i]<<" "<<a[(int)str[i]]<<endl;
    }
    for(int i=97; i<123; i++){
        if(a[i]!=0){
            total+=1;
        }
    }
    if(total%2==0){
        cout<<"CHAT WITH HER"<<endl;
    }else
        cout<<"IGNORE HIM"<<endl;


    return 0;
}