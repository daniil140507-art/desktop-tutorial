#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::setlocale(LC_ALL, "Russian");

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Размер массива должен быть больше 0." << std::endl;
        return 1;
    }

    std::vector<int> arr(size);

    std::cout << "Введите элементы массива через пробел:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    bubbleSort(arr);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
