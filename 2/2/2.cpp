#include <iostream>
#include<cmath>

int real_string_hash(int p, int n, std::string& str) {
    int hash = 0; 
    for (int i = 0; i < str.length(); i++) {
        hash += (static_cast<char>(str[i]) * pow(p, i));
    }
    return hash % n;
}

int main() {
    setlocale(LC_ALL, "Russian");

    std::string input;
    int p = 0;
    int n = 0;

    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите строку: ";
    std::cin >> input;

    while (true) {
        int hash = real_string_hash(p, n, input);
        std::cout << "Хэш строки " << input << " = " << hash << std::endl;
        if (input == "exit") {
            break;
        }
        std::cout << "Введите строку: ";
        std::cin >> input;
    }

    return 0;
}