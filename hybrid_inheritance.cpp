
#include<iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A";
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    B obj;
    obj.show();

    return 0;
}
