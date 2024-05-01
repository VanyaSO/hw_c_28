#include "MyString.h"
#include <cstring>

MyString::MyString(char* string) {
    if (string != nullptr)
    {
        this->size = strlen(string);
        this->string = new char[this->size+1];
        this->string[this->size] = '\0';

        int sizeNew = strlen(string);
        this->string = new char[sizeNew + 1];
        strcpy(this->string, string);
    }
    else
    {
        this->string = nullptr;
        this->size = 0;
    }
}

MyString::MyString():MyString(nullptr){};

MyString::MyString(const MyString& obj) {
    if (this->string != nullptr)
    {
        delete[] this->string;
    }

    this->size = obj.size;
    this->string = new char[this->size+1];
    int i = 0;
    while(obj.string[i] !='\0')
    {
        this->string[i] = obj.string[i];
        i++;
    }
}

MyString::~MyString()
{
    if (this->string != nullptr)
    {
        delete[] this->string;
    }
}

int MyString::MyStrLen() {
    int i = 0;
    while(this->string[i] !='\0')
    {
        i++;
    }
    return i;
}

MyString& MyString::operator=(const MyString& obj) {
    if (this->string != nullptr)
    {
        delete[] this->string;
    }

    this->size = obj.size;
    this->string = new char[this->size+1];
    int i = 0;
    while(obj.string[i] !='\0')
    {
        this->string[i] = obj.string[i];
        i++;
    }

    return *this;
}

void MyString::clearStr() {
    if (this->string != nullptr)
    {
        delete[] this->string;
    }

    this->string = new char[1];
    this->string[0] = '\0';
    this->size = 0;
}

MyString MyString::operator+(const MyString& obj) {
    int sizeNew = this->size + obj.size;
    char* stringNew = new char[sizeNew];

    int i = 0, k = 0;
    while(this->string[i] != '\0')
    {
        stringNew[k] = this->string[i];
        i++;
        k++;
    }
    i = 0;
    while(obj.string[i] != '\0')
    {
        stringNew[k] = obj.string[i];
        i++;
        k++;
    }

    MyString strNew(stringNew);
    delete[] stringNew;

    return strNew;
}

void MyString::operator+=(const MyString& obj) {
    int sizeNew = this->size + obj.size;
    char* stringNew = new char[sizeNew];

    int i = 0, k = 0;
    while(this->string[i] != '\0')
    {
        stringNew[k] = this->string[i];
        i++;
        k++;
    }
    i = 0;
    while(obj.string[i] != '\0')
    {
        stringNew[k] = obj.string[i];
        i++;
        k++;
    }

    allocString(stringNew);
    delete[] stringNew;
}

bool MyString::operator==(const MyString &obj) {
    return myStrcmp(obj);
}

bool MyString::operator!=(const MyString &obj) {
    return !myStrcmp(obj);
}

void MyString::show() const {
    cout << string << endl;
}








