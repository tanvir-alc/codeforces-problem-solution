#include <iostream>
#include<cstring>
using namespace std;
int main() {

   char s[101];
   char t[101];

   cin>>s>>t;

   int size_one =strlen(s);

    int size_two =strlen(t);
    cout<<size_one<<" "<<size_two<<endl;
    cout<<s<<" "<<t<<endl;
    return 0;
}