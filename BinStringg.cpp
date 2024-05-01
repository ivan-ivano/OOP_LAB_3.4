// BinString.cpp
#include "BinStringg.h"
#include <iostream>

BinString::BinString(const std::string& id, const std::string& val, int intVal)
    : SymString(id, val), intValue(intVal) {}

void BinString::ShowHex() const {
    SymString::ShowHex();
    std::cout << ", Int Value: " << intValue << std::endl;
}

int BinString::getIntValue() const {
    return intValue;
}

BinString operator-(const BinString& s1, const BinString& s2) {
    return BinString("Result", "", s1.getIntValue() - s2.getIntValue());
}