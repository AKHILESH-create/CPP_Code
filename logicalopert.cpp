#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(n>99 && n<1000)
    {
        cout<<"3 Digit Number";
    }
    else{
        cout<<"Not a 3 digit number";
    }
    return 0;
}