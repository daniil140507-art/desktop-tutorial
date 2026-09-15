#include <iostream>
#include <string>

int main() {
    std::setlocale(LC_ALL, "Russian");

    std::wstring name, surname;

    std::wcout << "name:";
    std::wcin >> name;

    std::wcout << "surname:";
    std::wcin >> surname;

    for (int i = name.length() - 1; i >= 0; i--) {
        std::wcout << name[i];
    }

    std::wcout << " ";

    for (int i = surname.length() - 1; i >= 0; i--) {
        std::wcout << surname[i];
    }

    std::wcout << std::endl;

    return 0;
}

