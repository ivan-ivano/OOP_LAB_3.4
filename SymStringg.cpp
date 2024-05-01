// SymString.cpp
#include "SymStringg.h"
#include <iostream>
#include <algorithm>

SymString::SymString(const std::string& id, const std::string& val)
    : identifier(id), value(val) {}

void SymString::ShowHex() const {
    std::cout << "Identifier: " << identifier << ", Hex Value: ";
    for (char c : value) {
        std::cout << std::hex << static_cast<int>(static_cast<unsigned char>(c));
    }
    std::cout << std::endl;
}

std::string SymString::getValue() const {
    return value;
}

std::string SymString::getIdentifier() const {
    return identifier;
}

SymString operator-(const SymString& s1, const SymString& s2) {
    std::string result = s1.getValue();
    size_t pos = result.find(s2.getValue());
    if (pos != std::string::npos) {
        result.erase(pos, s2.getValue().length());
    }
    return SymString("Result", result);
}
