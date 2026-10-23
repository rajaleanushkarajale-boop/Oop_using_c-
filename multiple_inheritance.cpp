#include<iostream>
using namespace std;

class Father
{
    public:
    void work()
    {
        cout<<"Father works hard"<<endl;
    }
};

class Mother
{
    public:
    void cook()
    {
        cout<<"Mother cooks very tasty food"<<endl;
    }
};

class Child:public Father,public Mother
{
    public:
    void play()
    {
        cout<<"Child loves to play"<<endl;
    }
};

int main()
{
    Child c;
    c.work();
    c.cook();
    c.play();

    return 0;
}