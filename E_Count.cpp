#include <iostream>
#include<cstring>
using namespace std;
int main() {

   //0=48 ascii value
   char s[1000001];
   cin>>s;
   int length =strlen(s);
   int sum=0;
   for (int i = 0; i <length; i++)
   {
    sum+=s[i]-'0';
    //sum+=s[i]-48';
   }
   cout<<sum;
   

    return 0;
}