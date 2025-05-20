#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int star =1, space =x-1;
    for (int i = 0; i <x; i++)
    {
        for(int j =1;j<=space;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        
           cout<<endl; 
           star +=2;
           space--;
    }
    return 0;
}