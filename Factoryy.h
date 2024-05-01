// Factory.h
#pragma once
#include <vector>
#include "SymStringg.h"
#include "BinStringg.h"

class Factory {
private:
    std::vector<SymString> symStringObjects;
    std::vector<BinString> binStringObjects;

public:
    SymString* createSymString(const std::string& id, const std::string& val);
    BinString* createBinString(const std::string& id, const std::string& val, int intValue);
    void deleteSymString(const std::string& id);
    void deleteBinString(const std::string& id);
    void showValue(const std::string& id) const;
    void showAll() const;
    void showAllHEX() const;
    SymString& getSymString( int index);
    int getSymStringCount() const;
};