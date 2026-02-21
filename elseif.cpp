#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"enter costprice: ";
    cin>>cp;
    int sp;
    cout<<"enter selling price:";
    cin>>sp;
    if (sp>cp)
    {
        cout<<"profit"<<endl;
    }
    else if(sp<cp)
    {
        cout<<"loss"<<endl;
    }
    else{
        cout<<"no profit no loss";
    }
    return 0;
}

    
