#include <iostream>

void convert(int time, int* minutes, int* seconds) {
    if (minutes != nullptr) {
        *minutes = time / 60;
    }
    if (seconds != nullptr) {
        *seconds = time % 60;
    }
}

int main() {
    int total_seconds = 0;
    int mins = 0;
    int secs = 0;

    std::cout << "Enter time in seconds: ";
    std::cin >> total_seconds;

    convert(total_seconds, &mins, &secs);

    std::cout << total_seconds << " seconds is "
              << mins << " minute and "
              << secs << " seconds." << std::endl;

    return 0;
}


