#include <bits/stdc++.h>
using namespace std;

int minimize(int [], int, int);

int main(){
    int n=5;
    // cin>>n;
    // int a[n];
    int k=3;
    // cin>>k;
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    int a[]={3,9,12,16,20};
    int res = minimize(a, n, k);
    cout<<"Minimum height: "<<res;

    return 0;
}

int minimize(int arr[], int n, int k){sort(arr, arr+n);
    int tmax=arr[n-1]-k;
    int tmin=arr[0]+k;
    int diff = arr[n-1]-arr[0];

    for(int i=1; i<n; i++){
        if((arr[i]-k)<0) continue;
        
        tmax = max((arr[i-1]+k), (arr[n-1]-k));
        tmin = min((arr[0]+k), (arr[i]-k));

        diff = min(diff, tmax - tmin);
    }

    return diff;
}

//5
// 10
// 2 6 3 4 7 2 10 3 2 1
// 1 2 2 2 3 3 4 6 7 10