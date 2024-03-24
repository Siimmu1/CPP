#include <iostream> // cout
#include <iomanip> // setprecision, setw, setfill
#include <ios> // fixed, scientific, defaultfloat, showpoint, internal

using namespace std;


int main() {

cout << setw(10) << 20.0 << endl;
cout << setw(5) << setfill('*') <<  20.0 << setfill('*') << endl;
cout << setbase(10) << 20.0 << endl;
cout << setprecision(10) << 20.0 << endl;
}