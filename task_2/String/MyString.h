#ifndef HW_C_19_MYSTRING_H
#define HW_C_19_MYSTRING_H
#include <iostream>
using namespace std;

class MyString
{
protected:
    char* string;
    int size;

    void allocString(const char* string)
    {
        this->size = strlen(string);
        this->string = new char[this->size+1];
        strcpy(this->string, string);
        this->string[this->size] = '\0';
    }
    bool myStrcmp(const MyString& obj) {
        int size = this->size < obj.size ? this->size : obj.size;
        for (int i = 0; i < size; i++)
        {
            if (this->string[i] != obj.string[i])
            {
                return false;
            }
        }
        if (this->size < obj.size || this->size > obj.size)
            return false;

        return true;
    }
public:
    MyString(); // +
    MyString(char* string); // +
    MyString(const MyString& obj); // +
    int MyStrLen(); // +
    MyString& operator=(const MyString&);
    void clearStr();
    MyString operator+(const MyString&);
    void operator+=(const MyString&);
    bool operator==(const MyString&);
    bool operator!=(const MyString&);
    virtual void show() const;
    ~MyString();// +
};

#endif

