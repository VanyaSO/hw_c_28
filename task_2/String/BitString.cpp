#include "BitString.h"

BitString::BitString(char *bitString): MyString(bitString) {
    if (!isBitString(bitString))
        clearStr();
}

bool BitString::isBitString(const char *bitString) {
    int i = 0;
    while(bitString[i] != '\0')
    {
        if (bitString[i] != '0' && bitString[i] != '1')
            return false;

        i++;
    }
    return true;
}

BitString::BitString(const BitString& obj) {
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

BitString& BitString::operator=(const BitString &obj) {
    MyString::operator=(obj);
    return *this;
}

BitString BitString::operator+(const BitString &obj) {
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

    BitString strNew(stringNew);
    delete[] stringNew;

    return strNew;
}

void BitString::operator+=(const BitString& obj) {
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

void BitString::show() const {
    cout << string << endl;
}

void BitString::changeChar() {
    int i = 0;
    while(string[i] != '\0')
    {
        if (string[i] == '0')
            string[i] = '1';
        else if (string[i] == '1')
            string[i] = '0';

        i++;
    }
}





