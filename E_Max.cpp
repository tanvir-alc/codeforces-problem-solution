#include <iostream>
using namespace std;
int main() {

   int n;
   cin>>n;
  int max=0;

   for(int i=1;i<=n;i++)
   {
    int val;
    cin>>val;
    if(max<val)
        max=val;
    
   }
   cout<<max;
    return 0;
}