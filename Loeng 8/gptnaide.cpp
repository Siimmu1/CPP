#include <iostream>

struct MultiplicationTable {
    int rows, columns;
};

void createMultiplicationTable(const MultiplicationTable &table) {
    for (int i = 1; i <= table.rows; ++i) {
        for (int j = 1; j <= table.columns; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    MultiplicationTable table;
    std::cout << "Enter number of rows: ";
    std::cin >> table.rows;
    std::cout << "Enter number of columns: ";
    std::cin >> table.columns;

    std::cout << "Multiplication Table:" << std::endl;
    createMultiplicationTable(table);

    return 0;
}