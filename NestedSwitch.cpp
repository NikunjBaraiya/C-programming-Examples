#include <iostream>
using namespace std;

int main ()
{
    int a;
    int b;

    cout<<"Enter the value of a = "<<endl;
    cin>>a;

    cout<<"Enter the value of b= "<<endl;
    cin>>b;

    switch(a)
    {
        case 1:
        cout<<"AB"<<endl;
        break;
        
        case 2:
        cout<<"CD"<<endl;
        break;

        case 4:
        switch(b)

    {
        case 4:
        cout<<"GH"<<endl;
        break;

        case 5:
        cout<<"IJ"<<endl;
        break;

    }
    break;

        case 3:
        cout<<"EF"<<endl;
        break;


    }
    


    cout<<"Output = "<<a<<endl;
    cout<<"Output = "<<b<<endl;
    return 0;
}