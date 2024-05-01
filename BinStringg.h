// BinString.h
#pragma once
#include "SymStringg.h"

class BinString : public SymString {
private:
    int intValue;
public:
    BinString(const std::string& id, const std::string& val, int intVal);
    void ShowHex() const override;
    int getIntValue() const;
    friend BinString operator-(const BinString& s1, const BinString& s2);
};