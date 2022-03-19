#include <iostream>
using namespace std;

int main(int argc, char **argv)
{	
	int arr[5][5],count=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				count = abs(3-(i+1)) + abs(3-(j+1));
			}
		}
		//cout<<"\n";
	}
	cout<<count;
	return 0;
}

/*
      ////works////
    main()
    {
        int x,i=0;
        cin >> x;
        for (;x!=1;i++)
            cin>>x;
        cout << abs(2-(i%5)) + abs(2-(i/5));
        
        return 0;
    }
 */
