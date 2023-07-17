#include<iostream>
using namespace std;

int main() {
    int outerChoice, innerChoice;

    std::cout << "Enter outer choice:  1/2 ";
    std::cin >> outerChoice;

    switch (outerChoice) {
        case 1:
            std::cout << "Outer choice 1 selected." << std::endl;
            std::cout << "Enter inner choice: 1/2 ";
            std::cin >> innerChoice;

            switch (innerChoice) {
                case 1:
                    std::cout << "Inner choice 1 selected." << std::endl;
                    break;
                case 2:
                    std::cout << "Inner choice 2 selected." << std::endl;
                    break;
                default:
                    std::cout << "Invalid inner choice." << std::endl;
            }

            break;
        case 2:
            std::cout << "Outer choice 2 selected." << std::endl;
            break;
        default:
            std::cout << "Invalid outer choice." << std::endl;
    }

    return 0;
}
