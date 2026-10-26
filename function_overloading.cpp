#include<iostream>
using namespace std;

class Demo
{
    public:
    void add(int a,int b)
    {
        cout<<"The sum is "<<a+b<<endl;
    }

    void add(int a,int b,int c)
    {
        cout<<"The sum is "<<a+b+c<<endl;
    }
};

int main()
{
    Demo d;
    d.add(10,20);
    d.add(10,20,30);

    return 0;
}