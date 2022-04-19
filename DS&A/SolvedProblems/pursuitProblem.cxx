#include<iostream>
#include<iomanip>  
#include<math.h>
using namespace std;

// function to simulate pursuit
void pursuit(){
    //bomber
    float xB[]={80,90,99,108,116,125,133,141,151,160,169,179,180}; 
    float yB[]={0,-2,-5,-9,-15,-18,-23,-29,-28,-25,-21,-20,-17};
    //pursuer jet
    float xF[13], yF[13];
    xF[0]=0;    
    yF[0]=50;
    double vF=20;   //jet velocity
    
    int t;  // for time [0 - 12] seconds

    for(t=0; t<13; t++){
        double distance = sqrt(pow(yB[t]-yF[t],2)+pow(xB[t]-xF[t],2));
        double sinx = (yB[t]-yF[t])/distance;
        double cosx = (xB[t]-xF[t])/distance;

        if(distance<10){
            cout<<"Caught at t = "<<setprecision(4)<<t<<" minutes "<<"and distance is "<<distance<<"\n";
            break;
        }
        else{
            xF[t+1] = xF[t]+(vF*cosx);
            yF[t+1] = yF[t]+(vF*sinx);
        }
    }
    if(t>11){
        cout<<"Target escaped!!!\n";
    }
}

int main(){
    
    pursuit();

    return 0;
}