#include <iostream>
#include "kursus.h"

using namespace std;

void kursus::lisa_tudeng(const tudeng& t) {
    
    tudengid.push_back(t);
}

double kursus::keskmine() {
    if (tudengid.empty()) {
        return 0;
    }

    double summa = 0;
    for (const auto& tudeng : tudengid) {
        summa += tudeng.punktid;
    }

    return summa / tudengid.size();
}


void kursus::valjasta_paremik() {
    double keskmine_punktid = keskmine();

    for (const auto& tudeng : tudengid) {
        if (tudeng.punktid > keskmine_punktid) {
            tudeng.print();
        }
    }
}
