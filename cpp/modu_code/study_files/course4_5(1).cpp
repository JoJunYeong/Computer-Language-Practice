#include "course4_5(1).hpp"

MyString::MyString(char c) {
    string_content = new char[1];
    string_content[0] = c;
    string_length = 1;
}

MyString::MyString(const char* str) {
    string_length = strlen(str);
    string_content = new char[string_length];

    for(int i = 0; i != string_length ; i++)
        string_content[i] = str[i];
}

MyString::MyString(const MyString& str){
    string_length = str.string_length;
    string_content = new char[string_length];

    for(int i =0 ; i != string_length ; i++)
        string_content[i] = str.string_content[i];
}

MyString::~MyString() {
    delete[] string_content;
}

int MyString::length() const {
    return string_length;
}

void MyString::print() const {
    for( int i = 0; i != string_length; i++){
        std::cout << string_content[i];
    }
}

void MyString::println() const{
    for( int i =0 ; i != string_length ; i++){
        std::cout << string_content[i] ;
    }

    std::cout<< std::endl;
}





