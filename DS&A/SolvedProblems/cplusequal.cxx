#include<iostream>
using namespace std;

int main(){
    int t=1, a=5,b=4,n=100,count=0,l=1;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        while(l){
            if(a>n||b>n)
                break;
            if(a<=b){
                a+=b;
                    count++;
                if(a==n){
                    count++;
                    l=0;
                    break;}
                // cout<<count<<" "<<a<<" "<<b<<endl;
            }
            else if(a>b){
                b+=a;
                    count++;
                if(b==n){
                    count++;
                    l=0;
                    break;
                }
                // cout<<count<<" "<<a<<" "<<b<<endl;
            }
            else{
                count++;
                l=0;
                break;
            }
        }
        //if(a==n||b==n){
            cout<<count<<endl;
        // }
        // else
        //     cout<<count+1<<endl;
        count=0;
        l=1;
    }


    return 0;
}