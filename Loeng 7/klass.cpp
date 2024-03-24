#include <iostream>

using namespace std;

int globaalne_muutuja = 0;

struct klass {
    static int klassi_muutuja;
    int objekti_muutuja = 0;
    void meetod() {
        int meetodi_muutuja = 0;
        ++globaalne_muutuja;
        ++klassi_muutuja;
        ++objekti_muutuja;
        ++meetodi_muutuja;
        cout << globaalne_muutuja
            << " " << klassi_muutuja
            << " " << objekti_muutuja
            << " " << meetodi_muutuja
            << endl;
    }
};

int klass::klassi_muutuja = 0;

int main() {
    klass objekt_a;
    objekt_a.meetod();

    klass objekt_b;
    objekt_b.meetod();
    objekt_b.meetod();
}