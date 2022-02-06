//This program demonstrates the use of objects as arguments to member
//and non-member functions using Call by Value mechanism

#include <iostream>
using namespace std;

class Time{
    int hrs, mins, secs;
    public:
        int tot_sec;
        void getTime(int h, int m, int s){
            hrs = h;
            mins = m;
            secs = s;
            tot_sec = (hrs*60) + (mins*60) + secs;
        }
        void putTime(void){
            cout<<"Time is: "<<hrs<<":"<<mins<<":"<<secs<<"\n";
        }
        void convert(Time t, char ch); //prototype
        void sum(Time t1, Time t2);
        int getHrs(){return hrs;}
        int getMins(){return mins;}
        int getSecs(){return secs;}
};

void Time::convert(Time t, char ch){
    switch(ch){
        case 'h': 
            cout<<"Time in hours is: "<<t.hrs<<":"<<t.mins<<":"<<t.secs<<" hrs \n";
            break;
        case 'p': 
            cout<<"Time in am/pm is: "<<((t.hrs>12)?(t.hrs-12):t.hrs)<<":"<<t.mins<<":"<<t.secs;
            cout<<((t.hrs>12)?"pm":"am")<<"\n";
            break;
        default : cout<<"Wrong choice \n";
    }
}

void Time::sum(Time t1, Time t2){
    int h, m, s, sq, mq;
    sq = (t1.secs+t2.secs)/60;
    s = (t1.secs+t2.secs)%60;
    mq = (sq+t1.mins+t2.mins)/60;
    m = (sq+t1.mins+t2.mins)%60;
    h = mq + t1.hrs + t2.hrs;
    if(h == 24) h=0;
    cout<<"Total time is: "<<h<<":"<<m<<":"<<s<<"\n";
}

void prnvalues(Time t1){
    cout<<"Total seconds: "<<t1.tot_sec;    //tot_sec is a public member
    cout<<"\n";
}
int main(){
    Time tm1, tm2;
    //int tt;
    tm1.getTime(5,13,27);
    tm2.getTime(17, 48, 38);

    cout<<"Enter h to convert in hours format, p for am/pm format: ";
    char ch;
    cin>>ch;
    tm1.convert(tm2, ch);
    tm1.sum(tm1, tm2);
    prnvalues(tm2);
    return 0;
}
