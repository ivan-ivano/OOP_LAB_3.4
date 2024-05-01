// SymString.h
#pragma once
#include <string>

class SymString {
protected:
    std::string identifier;
    std::string value;
public:
    SymString(const std::string& id, const std::string& val);
    virtual void ShowHex() const;
    std::string getValue() const;
    std::string getIdentifier() const;
    friend SymString operator-(const SymString& s1, const SymString& s2);
};