#include<iostream>
using namespace std;

int main()
{
    int a,b,ch;

    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";

    cout<<"Enter your Choice :";
    cin>>ch;

    cout<<"Enter two numbers :";
    cin>>a>>b;

    switch(ch)
    {
        case 1:
        cout<<"Addition = "<<a+b;
        break;

        case 2:
        cout<<"Subtraction = "<<a-b;
        break;

        case 3:
        cout<<"Multiplication = "<<a*b;
        break;

        case 4:
        if(b!=0)
        cout<<"Division = "<<float(a/b);

        else
        cout<<"Cannott be divide by zero";
        break;

        default:
        cout<<"Invalid choice";


    }
return 0;
}