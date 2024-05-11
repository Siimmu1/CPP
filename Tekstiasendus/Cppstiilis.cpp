#include <iostream>
#include <string>

std::string asendus(const std::string& S, const std::string& T, const std::string& U) {
    std::string tulem;
    size_t pos = 0;

    while ((pos = S.find(T, pos)) != std::string::npos) {

        if (pos == 0 || !std::isalpha(S[pos - 1])) {

            tulem += U;
        } else {

            tulem += S.substr(pos, T.length());
        }

        pos += T.length();
    }


    tulem += S.substr(pos);

    return tulem;
}

int main() {
    std::string S, T, U;
    
    // Read entire lines of input
    std::getline(std::cin, S);
    std::getline(std::cin, T);
    std::getline(std::cin, U);

    std::string tulem = asendus(S, T, U);
    std::cout << tulem << std::endl;

    return 0;
}