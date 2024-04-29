#include <iostream>
using namespace std;
#include "./Pet.h"


int main()
{
    Dog dog = {"Riko", 3};
    Cat cat = {"Peta", 3};
    Parrot parrot = {"Fin", 3};

    dog.speak();
    cat.speak();
    parrot.speak();

    return 0;
}
