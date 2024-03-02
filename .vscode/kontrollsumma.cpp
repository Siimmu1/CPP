#include <iostream>
#include <string>

void add_check(std::string &sequence) {
    int sum = 0;
    for (char digit : sequence) {
        sum += digit - '0';
    }

    int check_digit = (10 - (sum % 10)) % 10;

    sequence += std::to_string(check_digit);
}

// NB! You MUST NOT change the main() function!
int main() {
    std::string s;
    std::cin >> s;
    add_check(s);
    std::cout << s << std::endl;
    return 0;
}