// Factory.cpp
#include "Factoryy.h"
#include <iostream>

SymString* Factory::createSymString(const std::string& id, const std::string& val) {
    symStringObjects.emplace_back(id, val);
    return &symStringObjects.back();
}

BinString* Factory::createBinString(const std::string& id, const std::string& val, int intValue) {
    binStringObjects.emplace_back(id, val, intValue);
    return &binStringObjects.back();
}

void Factory::deleteSymString(const std::string& id) {
    auto it = std::find_if(symStringObjects.begin(), symStringObjects.end(), [&](const auto& obj) {
        return obj.getIdentifier() == id;
        });

    if (it != symStringObjects.end()) {
        symStringObjects.erase(it);
    }
}


void Factory::deleteBinString(const std::string& id) {
    auto it = std::find_if(binStringObjects.begin(), binStringObjects.end(), [&](const auto& obj) {
        return obj.getIdentifier() == id;
        });

    if (it != binStringObjects.end()) {
        binStringObjects.erase(it);
    }
}


void Factory::showValue(const std::string& id) const {
    for (const auto& obj : symStringObjects) {
        if (obj.getIdentifier() == id) {
            obj.ShowHex();
            return;
        }
    }

    for (const auto& obj : binStringObjects) {
        if (obj.getIdentifier() == id) {
            obj.ShowHex();
            return;
        }
    }

    std::cout << "Object with ID '" << id << "' not found." << std::endl;
}

void Factory::showAll() const {
    for (const auto& obj : symStringObjects) {
        obj.ShowHex();
    }

    for (const auto& obj : binStringObjects) {
        obj.ShowHex();
    }
}

void Factory::showAllHEX() const {
    for (const auto& obj : symStringObjects) {
        obj.ShowHex();
    }

    for (const auto& obj : binStringObjects) {
        obj.ShowHex();
    }
}

SymString& Factory::getSymString(int index) {
    return symStringObjects.at(index);
}

int Factory::getSymStringCount() const {
    return symStringObjects.size();
}

