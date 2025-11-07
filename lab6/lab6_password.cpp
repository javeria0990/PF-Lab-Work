// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    string password;
    while(true){
    cout<<"enter password"<<endl;
    cin>>password;
    if(password =="python123"){
        cout<<"correct password"<<endl;
     
       break;
    }
    else{
        cout<<"incorrect password"<<endl;
    }
    }
  return 0;
         }