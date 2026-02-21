#include <iostream>
using namespace std;
void usa()
{
    cout<<"You are in USA"<<endl;
}
void india()
{
    cout<<"You are in India"<<endl;
}
int main()
{
    cout<<"You are in main"<<endl;
    india();
    usa();
}