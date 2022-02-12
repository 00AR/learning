// Address manipulation in 2-D array

#include <iostream>
using namespace std;

int main(){
    int x[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int *n = &x[0][0];
    cout<<"1. *(*(x+2)+1) = "<<*(*(x+2)+1)<<endl;
    cout<<"2. *(*(x+2)+5) = "<<*(*x+2)+5<<endl;
    cout<<"3. *(*(x+1)) = "<<*(*(x+1))<<endl;
    cout<<"4. *(*(x)+2)+1 = "<<*(*(x)+2)+1<<endl;
    cout<<"5. *(*(x+1)+3) = "<<*(*(x+1)+3)<<endl;
    cout<<"6. *n = "<<*n<<endl;
    cout<<"7. *(n+2) = "<<*(n+2)<<endl;
    cout<<"8. (*(n+3)+1) = "<<(*(n+3)+1)<<endl;
    cout<<"9. *(n+5)+1 = "<<*(n+5)+1<<endl;
    cout<<"10. ++*n = "<<++*n<<endl;
    return 0;
}