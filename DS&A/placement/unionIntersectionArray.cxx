#include<bits/stdc++.h>
using namespace std;

int doUnion(vector<int>);
vector<int> oneList(int [], int, int[], int);
void printVec(vector<int>);
int main(){
    int m=3, n=5, in;
    cin>>n>>m;
    // int a[n], b[m];
    vector<int> list;
    // int a[] = {4, 3, 5, 1, 2};
    // int b[]={3, 2, 7};
    cout<<"First array: ";
    for(int i=0; i<n; i++){
        cin>>in;
        list.push_back(in);
    }
    // printVec(list);
    cout<<"Second array: ";
    for(int i=0; i<m; i++){
        cin>>in;
        list.push_back(in);
    }
    // printVec(list);

    sort(list.begin(), list.end());
    // printVec(list);
    // cout<<"\nunion\n";

    int total = doUnion(list);
    cout<<"total = "<<total;
    return 0;
}

int doUnion(vector<int> v){
    int ct=0;
    int max=v[v.size()-1];
    
    int res[max+1];
    for(int i=0; i<max+1; i++)
        res[i]=0;
    
    for(auto it: v){
        if(res[it]==0){
            res[it]=1;
            ct++;
        }
    }

    return ct;
}

/*
vector<int> oneList(int a[], int n, int b[], int m){
    vector<int> v;
    for(int i=0; i<n; i++){
        v.push_back(a[i]);
    }    
    for(int i=0; i<n; i++){
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());

    return v;
}
*/

void printVec(vector<int> l){
    for(auto it: l)
        cout<<it<<" ";
}