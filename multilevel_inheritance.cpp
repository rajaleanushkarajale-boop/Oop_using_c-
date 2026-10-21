#include<iostream>
using namespace std;

class Grandparent
{
    public:
    void house()
    {
        cout<<"Grandparents has house"<<endl;
    }
};

class Parent:public Grandparent
{
    public:
    void car()
    {
        cout<<"Parent has a Car"<<endl;
    }
};

class Child:public Parent
{
    public:
    void bike()
    {
        cout<<"Child has a Bike"<<endl;
    }
};

int main()
{
    Child c;
    c.house();
    c.car();
    c.bike();

    return 0;
}