#include<iostream>
using namespace std;

class A
{
    public:
    int x;
};

class B:virtual public A
{

};

class C:virtual public A
{

};

class D:public B,public C
{
    public:
    void display()
    {
        x=10;
        cout<<"The value of x is "<<x;
    }
};

int main()
{
    D obj;
    obj.display();

    return 0;
}