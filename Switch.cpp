#include <iostream>
using namespace std;

int main ()
{
    char Grade;


    cout<<"Enter Grade :-"<<endl;
    cin>>Grade;
    
        switch (Grade)
        {
            case 'A':
            cout<<"Excellent 👍👍👍"<<endl;
            break;

            case 'B':
            case 'c':
            cout<<"Well Done"<<endl;
            break;

            case 'D':
            cout<<"You Passed"<<endl;
            break;

            case 'F':
            cout<<"Better Try Again"<<endl;
            break;

            default :
            cout<<"Invalid Grade"<<endl;
        }

           
            cout<<"Your grade is :- "<<Grade<<endl;
            // cout<<"Enter The Grade = "<<Grade<<endl;


            return 0;
}
     