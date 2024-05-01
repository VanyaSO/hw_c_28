#include <iostream>
using namespace std;
#include "String/MyString.h"
#include "String/BitString.h"


int main() {
    MyString str1S("tet");
    MyString str2S("tet");
    cout << (str1S == str2S) << endl;
//
//    str1 += str2;
//
//    str1.show();
//
//    MyString str3;
//    str3 = str2;
//    str3.show();
//    cout << str3.MyStrLen() << endl;
//
//    MyString str4;
//    str4 = str3 + str1;
//
//    str4.show();
//    cout << str4.MyStrLen() << endl;
//    str4.clearStr();
//    str4.show();

    BitString str1("001");
    BitString str2("001");
    cout << (str1 == str2) << endl;

    str2 += str1;

    str2.changeChar();
    str2.show();
    str1.show();

    return 0;
}