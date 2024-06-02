#include <iostream>

int simple_string_hash(std::string& str) {
    int hash = 0;
    for (char c : str) {
        hash += static_cast<int>(c);
    }
    return hash;
}

int main() {
    setlocale(LC_ALL, "Russian");

    std::string input;
    std::cout << "Введите строку: ";
    std::cin >> input;

    while (true) {
        int hash = simple_string_hash(input);
        std::cout << "Наивный хэш строки " << input << " = " << hash << std::endl;
        std::cout << "Введите строку: ";
        std::cin >> input;
    }

    return 0;
}