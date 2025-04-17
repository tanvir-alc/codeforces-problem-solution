#include <iostream>
using namespace std;
int main() {

   int n ;
   cin>>n ;
   int first_digit=n/1000;
   if(first_digit %2 ==0){
    cout<<"EVEN"<<endl;
   }
   else{
    cout<<"ODD";
   }
    
    return 0;

}