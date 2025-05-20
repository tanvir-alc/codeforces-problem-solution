#include <iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        int n ;
        cin>>n;

        do
        {
         cout<< n%10<<" ";
         n = n/10;
     
        }while(n !=0);

    cout<<endl;
    }
    return 0;
}