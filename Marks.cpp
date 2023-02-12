#include<iostream>
using namespace std;

int main ()
{
    char Marks;

    cout<<"Enter the Subject"<<endl;
    cin>>Marks;

    switch(Marks)
    {
        case 'P':
        cout<<"30/17"<<endl;
        break;

        case 'W':
        cout<<"30/18"<<endl;
        break;

        case 'M' :
        cout<<"30/17"<<endl;
        break;
    }
    cout<<"Total Marks = "<<endl;
    return 0;
}