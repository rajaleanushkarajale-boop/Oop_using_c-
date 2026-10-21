#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};

class Dog:public Animal
{
public:
void bark()
{
    cout<<"Dog is barking"<<endl;
}
};

class Cat:public Animal
{
    public:
    void meow()
    {
        cout<<"Cat is meowing";
    }
};

int main()
{
    Dog d;
    Cat c;

    d.bark();
    d.eat();

    c.meow();
    c.eat();

    return 0;
}
