#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool flag = true;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag = false;
            break;
        }
    }
    if(n==1) cout<<"Neither Prime nor Composite";
    else if(flag==true) cout<<"prime";
    else cout<<"Composite";
    return 0;
}