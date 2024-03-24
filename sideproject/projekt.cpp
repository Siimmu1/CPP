#include <iostream>

using namespace std;

int main() {
    double tonnage;
    double const price_per_ton = 150;

    cout << "Enter desired tonnage!" << endl << "The price per ton is: " << price_per_ton << endl;
    cin >> tonnage;

    int price = tonnage * price_per_ton;

    cout << "This ship will cost: " << price << " Pounds!" << endl;
}