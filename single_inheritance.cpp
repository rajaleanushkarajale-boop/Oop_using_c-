#include<iostream>
using namespace std;

class Parent
{
    public:
    void work()
    {
        cout<<"Parents take care of their child"<<endl;
    }
};
class Child:public Parent
{
    public:
    void grow()
    {
    cout<<"Children take care of their parents when they grown ups";
    }
};
int main()
{
    Child c;
    c.work();
    c.grow();

    return 0;
}