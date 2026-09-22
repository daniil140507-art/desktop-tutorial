#include <iostream>
#include <string>
#include <algorithm>
#include <clocale>

int main() {
#if defined(_WIN32) || defined(_WIN64)
    std::setlocale(LC_ALL, "Russian");
#else
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
#endif

    int password_length = 0;
    std::wcout << L"Enter desired password length: ";
    std::wcin >> password_length;

    std::wstring name, surname;

    std::wcout << L"name: ";
    std::wcin >> name;

    std::wcout << L"surname: ";
    std::wcin >> surname;

    std::reverse(name.begin(), name.end());
    std::reverse(surname.begin(), surname.end());

    std::wcout << name << L" " << surname << std::endl;

    std::wstring source_pool = name + surname;

    std::wstring password = L"";
    if (!source_pool.empty() && password_length > 0) {
        for (int i = 0; i < password_length; i++) {
            password += source_pool[i % source_pool.length()];
        }
    }

    std::wcout << L"Generated password: " << password << std::endl;

    return 0;
}

