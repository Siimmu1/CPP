#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

struct korrutustabel {
    int read, veerud;
};

void tabel1(const korrutustabel & tabel) {

    int suurimvaartus = tabel.read * tabel.veerud;
    int uhekohaline = suurimvaartus < 10;
    int kahekohaline (suurimvaartus >= 10 && suurimvaartus <= 99);
    int kolmekohaline = (suurimvaartus >= 100 && suurimvaartus <= 999);
    int neljakohaline = (suurimvaartus >= 1000 && suurimvaartus <= 9999);

    for (int j = 1; j <= tabel.veerud; ++j) {
        for (int i = 1; i <= tabel.read; ++i) {

            if (suurimvaartus = uhekohaline)
                cout << " " << setw(1) << i * j;

            else if (suurimvaartus = kahekohaline)
                cout << " " << setw(2) << i * j;

            else if (suurimvaartus = kolmekohaline)
               cout << " " << setw(3) << i * j;
            
            else if (suurimvaartus = neljakohaline)
                cout << " " << setw(4) << i * j;

            else
               cout << " " << setw(5) << i * j;
            
        }
        cout << endl;
    }
}

int main() {
    korrutustabel tabel;
    
    string input;
    getline(cin, input); 

    istringstream iss(input); 
    iss >> tabel.read >> tabel.veerud; 

    if (tabel.read > 300 || tabel.veerud > 300) {
        cout << "Liiga suur arv!" << endl;
        return 1;
    }

    tabel1(tabel);
    return 0;
}