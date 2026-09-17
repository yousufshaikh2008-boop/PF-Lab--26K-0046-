#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    // Array storing word representations for numbers 1 through 9
    std::string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        std::cout << words[n] << std::endl;
    } else if (n > 9) {
        std::cout << "Greater than 9" << std::endl; // adjust exact phrasing/casing if required by your judge
    }

    return 0;
}
