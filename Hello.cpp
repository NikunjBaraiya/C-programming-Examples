#include <iostream>
using namespace std;

int main ()
{
    int a;
    int b;
    int c;

    cout<<"Enter the value of a:\n";
    cin>>a;

    cout<<"Enter the value of b:\n";
    cin>>b;

    cout<<"Output =\n";
    c = a+b;
    cout<<c<<endl;

    if(c == 30)
    {
        cout<<"Done\n";
    }
    else
    {
        cout<<"Wrong\n";
    }


    return 0;
}