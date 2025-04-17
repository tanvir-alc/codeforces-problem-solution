#include <iostream>
using namespace std;
int main() {

   int a,b,c;
   cin>>a>>b>>c;
   //Minimum
   if(a<b &&a<c)
   {
    cout<<a<<" ";
   }
   else if(b<=a && b<=c)
    {
    cout<<b<<" ";
    }
    else if(c<=a &&c<=b){
        cout<<c<<" ";
    }
   //Maximum
    if(a>=b &&a>=c)
   {
    cout<<a;
   }
   else if(b>=a && b>=c)
    {
    cout<<b;
    }
    else if(c>=a &&c>=b){
        cout<<c;
    }

    return 0;
}