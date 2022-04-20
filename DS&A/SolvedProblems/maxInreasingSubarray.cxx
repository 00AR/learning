#include<iostream>
using namespace std;

int main(){

    int n=5,ct=1, max=0,k=0;
    cin>>n;
    int c[n];
    long long a[n];
    // int a[]={1,7,2,11,15};
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[i] = 1;
    }

    for(int i=1; i<n; i++){
        if(a[i-1]<a[i]){
            ct++;
            c[k]=ct;
            // cout<<"comparing "<<a[i-1]<<" "<<a[i]<<"ct= "<<ct<<endl;
        }
        else{
            c[k]=ct;
            ct=1;
            k++;
        }
    }

    for(int i=0; i<n; i++){
        // cout<<c[i]<<" ";
        if(c[i]>max){
            max = c[i];
        }
    }
    cout<<max<<endl;

    return 0;
}