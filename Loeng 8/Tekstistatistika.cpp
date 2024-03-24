#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int pikimlause(ifstream& sisend) {
    
    int pikim = 0;
    string rida;

    sisend.clear();
    sisend.seekg(0, ios::beg);

    while (getline(sisend, rida)) {
        
        stringstream ss(rida);
        int sonade_arv = 0;
        string sona;
        
        while (ss >> sona) {
            sonade_arv++;
        }
        if (sonade_arv > pikim) {
            pikim = sonade_arv;
        }
    }
    return pikim;
};


int sonaloendur(ifstream& sisend) { 

    int sonad = 0;
    string sona;

    sisend.clear(); 
    sisend.seekg(0, ios::beg);

    while (sisend >> sona) {
        sonad++;
        }
    return sonad;
};


int main(){

    ifstream sisend{"input.txt"};
    ofstream valjund{"output.txt"};

    if (sisend.is_open()) {
        string rida;
        int rea_arv = 0;

        while (getline(sisend, rida)) {
            rea_arv++;
        }
        
        int sonade_arv = sonaloendur(sisend);
        int pikimlause1 = pikimlause(sisend);

        sisend.close();

        cout << rea_arv << endl;
        cout << sonade_arv << endl;
        cout << pikimlause1 << endl;
    }

    else {
        cout << "Ei onnestunud faili avada!" << endl;
    }
    
    return 0;
}
