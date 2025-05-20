#include <iostream>
#include<cstring>
using namespace std;
int main() {

   char one[21],two[21];
   cin>>one>>two;

   int val = strcmp(one,two);
   if (val>0)
   {
    cout<<two;
   }
   else
   {
    cout<<one;
   }

    return 0;
}