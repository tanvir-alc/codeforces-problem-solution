#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;

    for (int i = x; i > 0; i--)
    {
        for (int i = 0; i < x; i++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        x--;
    }
    return 0;
}