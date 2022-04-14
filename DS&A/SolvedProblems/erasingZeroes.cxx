#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1, ind=-1, end=-1, n=0;
    cin>>t;
    string s="1111000";
    while(t--){
        cin>>s;
        if(s.length()==1){
            cout<<0<<endl;
            continue;
        }
        for(int i=0; i<s.length(); i++){
            if(ind==-1){
                if(s[i]=='1'){
                    ind=i;
                }
            }
            if(end==-1){
                if(s[s.length()-i]=='1'){
                    end=s.length()-i;
                }
            }
        }
        
        for(int i=ind;i<=end; i++){
            if(s[i]=='0')
                n++;
        }
        if(ind==-1||end==-1){
            cout<<0<<endl;
        }
        else
            cout<<n<<endl;    
        n=0;
        ind=-1;
        end=-1;
    }

    return 0;
}