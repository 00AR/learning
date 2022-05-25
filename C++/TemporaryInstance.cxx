#include <iostream>
using namespace std;

class TemporaryInstance{
	int i,j;
	public:
		TemporaryInstance(int a, int b){
			i=a;
			j=b;
		}
		void print(void){
			cout<<i<<", "<<j;
			cout<<"\n";
		}
};

int main(int argc, char **argv)
{
	TemporaryInstance t1(4,5);
	t1.print();
	TemporaryInstance(2,8).print();
	return 0;
}

