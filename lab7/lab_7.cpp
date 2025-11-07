#include <iostream>
using namespace std;
void checkOddEven(int n) {
	if(n%2==0)
		cout<<n<<" is even"<<endl;
	else
		cout<<n<<" is odd"<<endl;
}
   int main() {
	    int number;
	    cout<<"enter a number"<<endl;
	    cin>>number;
	    checkOddEven(number);
	    
    	return 0;
}