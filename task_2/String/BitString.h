#ifndef HW_C_28_BITSTRING_H
#define HW_C_28_BITSTRING_H
#include "./MyString.h"

class BitString: public MyString {
public:
    BitString() = default;
    BitString(char*);
    BitString(const BitString&);
    static bool isBitString(const char*);

    BitString& operator=(const BitString&);
    BitString operator+(const BitString&);
    void operator+=(const BitString&);
    void changeChar();
    void show() const override;
};


#endif
