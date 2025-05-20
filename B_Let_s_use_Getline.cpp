#include <iostream>
using namespace std;
int main() {

    char s[1000001];
   fgets(s,1000001,stdin);
   
   for (int i = 0; s[i] !='\\' ; i++)
   {
    cout<<s[i];
   }
   
    return 0;
}