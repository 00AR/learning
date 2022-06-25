#include<bits/stdc++.h>
using namespace std;

void rotate(int [], int);
void printarray(int [], int);

int main(){
    int n=6;
    // cin>>n;
    // int a[n];
    int a[] = {1, 2, 3, 4, 5, 6};
    // for(int i=0; i<n;i++){
    //     cin>>a[i];
    // }
    printarray(a,n);
    cout<<"\n";
    rotate(a,n);
    printarray(a,n);

    return 0;
}

void rotate(int a[], int n){
    int tmp=a[n-1];
    for(int i=n-2; i>=0; i--){
        a[i+1] = a[i];
    }
    a[0] = tmp;
}

void printarray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}