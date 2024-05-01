// main.cpp
#include <iostream>
#include "Factoryy.h"

int main() {
    Factory factory;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Create SymString object\n";
        std::cout << "2. Create BinString object\n";
        std::cout << "3. Delete SymString object\n";
        std::cout << "4. Delete BinString object\n";
        std::cout << "5. Show value of an object\n";
        std::cout << "6. Show all objects\n";
        std::cout << "7. Show all objects in HEX\n";
        std::cout << "8. Operator - \n";

        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string id, val;
            std::cout << "Enter identifier for SymString: ";
            std::cin >> id;
            std::cout << "Enter value for SymString: ";
            std::cin >> val;
            factory.createSymString(id, val);
            break;
        }
        case 2: {
            std::string id, val;
            int intValue;
            std::cout << "Enter identifier for BinString: ";
            std::cin >> id;
            std::cout << "Enter value for BinString: ";
            std::cin >> val;
            std::cout << "Enter integer value for BinString: ";
            std::cin >> intValue;
            factory.createBinString(id, val, intValue);
            break;
        }
        case 3: {
            std::string id;
            std::cout << "Enter identifier of SymString to delete: ";
            std::cin >> id;
            factory.deleteSymString(id);
            break;
        }
        case 4: {
            std::string id;
            std::cout << "Enter identifier of BinString to delete: ";
            std::cin >> id;
            factory.deleteBinString(id);
            break;
        }
        case 5: {
            std::string id;
            std::cout << "Enter identifier of the object to show its value: ";
            std::cin >> id;
            factory.showValue(id);
            break;
        }
        case 6:
            factory.showAll();
            break;
        case 7:
            factory.showAllHEX();
            break;

		case 8: {
            if (factory.getSymStringCount() < 2) {
                std::cout << "There are not enough SymString objects to perform subtraction.\n";
            }
            else {
                SymString result = factory.getSymString(0) - factory.getSymString(1);
                std::cout << "Result of subtraction: " << result.getValue() << "\n";
            }
            break;
        }
            

        case 0:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}