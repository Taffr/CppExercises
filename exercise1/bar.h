#include <string>
#include <iostream>
#pragma once
using std::cout;
using std::endl;

class Bar{
public:
    Bar(const std::string& s) :str{s} {}
    void print() const {cout << "Bar(" << str << ")\n";}
private:
    std::string str;
};
