#include <iostream>
#include <string>
#include <windows.h>
#include <vector>

using namespace std;

struct Student {
    string name;
    int age;
    int group;
    double mark;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<Student> students = {
    {"Иванов Иван", 19, 4511, 4.2},
    {"Петров Петр", 20, 4511, 4.8},
    {"Сидорова Анна", 19, 4512, 4.1}
    };

    Student s1;
    cout << " Ввод данных студента " << endl;

    cout << "Введите имя студента: ";
    getline(cin, s1.name);

    cout << "Введите возраст студента: ";
    cin >> s1.age;

    cout << "Введите средний балл студента: ";
    cin >> s1.mark;

    cout << "Введите номер группы: ";
    cin >> s1.group;
    cin.ignore();

    cout << "Данные студента 1 " << endl;
    cout << "Студент: " << s1.name << endl;
    cout << "Возраст: " << s1.age << endl;
    cout << "Группа: " << s1.group << endl;
    cout << "Средний балл: " << s1.mark << endl;

    students.push_back(s1);

    int max_index = 0;

    for (size_t i = 1; i < students.size(); ++i) {
        if (students[i].mark > students[max_index].mark) {
            max_index = i;
        }
    }

    cout << "Студент с максимальным средним баллом" << endl;
    cout << "Имя: " << students[max_index].name << endl;
    cout << "Группа: " << students[max_index].group << endl;
    cout << "Средний балл: " << students[max_index].mark << endl;

    return 0;
}
