#include<iostream>
using namespace std;

int main(){
    int a[50];
    int n=0,s=0,j=1;
    for(int i=1; i<50;i++){
        a[i]=s+(i*(i+1)/2);
        s=a[i];
        // cout<<a[i]<<endl;
    }
    cin>>n;
    for(int i=1;i<50; i++){
        if(a[i]>n){
            cout<<i-1<<endl;
            break;
        }
        else if(a[i]==n){
            cout<<i<<endl;
            break;
        }
        else 
            continue;
    }
    // while(s<=n){
    //     s+=a[j];
    //     j++;
    //     cout<<s<<" "<<j<<endl;
    // }
    //cout<<j-2;
    return 0;
}