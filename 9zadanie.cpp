#include <iostream>
#include <string>
#include <windows.h>

int countCharacters(const std::string& str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string fullName;
    std::cout << "Введите полное ФИО: ";
    std::getline(std::cin, fullName);

    std::cout << "длина строки: ";
    std::cout  << fullName.length() << std::endl;

    std::cout << "длина фамилии: ";
    size_t firstSpace = fullName.find(' ');
    std::cout  << firstSpace << std::endl;

    std::string lastName = fullName.substr(0, firstSpace);

    size_t secondSpace = fullName.find(' ', firstSpace + 1);
    std::string firstName = fullName.substr(firstSpace + 1, secondSpace - (firstSpace + 1));

    std::cout << lastName << std::endl;
    std::cout << firstName << std::endl;

    std::string shortName = lastName + "_" + firstName[0] + "." + fullName[secondSpace + 1] + ".";
    std::cout << shortName << std::endl;

    char targetChar;
    std::cout << "Введите символ для подсчета числа вхождений: ";
    std::cin >> targetChar;

    std::cout << "символов: ";
    std::cout << countCharacters(fullName, targetChar) << std::endl;

    return 0;
}
