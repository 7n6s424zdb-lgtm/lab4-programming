#include <iostream>

int main() {
    int month;
    std::cout << "Введите месяц: ";
    std::cin >> month;

    if (month<1 or month>12) {
        std::cout << "Некорректный месяц\n";
    } else if (month<3 or month==12) {
        std::cout << "Зима\n";
    } else if (month>2 and month<6) {
        std::cout << "Весна\n";
    } else if (month>5 and month<9) {
        std::cout << "Лето\n";
    } else {
        std::cout << "Осень\n";
    }

    return 0;
}