#ifndef HW_C_28_PET_H
#define HW_C_28_PET_H
#include <iostream>
using namespace std;

class Pet {
    string _name;
    int _age;

public:
    Pet(): _name(""), _age(0) {};
    Pet(string name, int age): _name(name), _age(age) {};
    virtual void speak()
    {
        cout << "The pet is saying something" << endl;
    }
};

class Dog: public Pet {
public:
    Dog() = default;
    Dog(string name, int age): Pet(name, age) {};
    void speak() override
    {
        cout << "woof" << endl;
    }

    void bark()
    {
        cout << "bark" << endl;
    }
};

class Cat: public Pet {
public:
    Cat() = default;
    Cat(string name, int age): Pet(name, age) {};
    void speak() override
    {
        cout << "meow" << endl;
    }

    void purring()
    {
        cout << "purring" << endl;
    }
};

class Parrot: public Pet {
public:
    Parrot() = default;
    Parrot(string name, int age): Pet(name, age) {};
    void speak() override
    {
        cout << "Hi, i am parrot" << endl;
    }

    void fly()
    {
        cout << "fly" << endl;
    }
};

#endif
