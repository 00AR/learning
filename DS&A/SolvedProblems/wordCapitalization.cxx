#include<iostream>
using namespace std;

int main(){
    //A=65, Z=90
    string s;
    // cin>>s;
    s="aonjac";
    if(s[0]>=97&&s[0]<=122)
        s[0]=(int)'A'+((int)s[0]-'a');
    cout<<s;
    return 0;
}