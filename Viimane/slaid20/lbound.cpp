// korrektne versioon
#include <iostream>
#include <fstream>
#include <vector>

int lower_bound(const std::vector<int> & a, int x) {
	unsigned lo = 0, hi = a.size();
	while (lo < hi) {
		unsigned mi = (lo + hi) / 2;
		if (a[mi] < x) {
			lo = mi + 1;
		} else {
			hi = mi;
		}
	}
	return lo;
}


int main() {
    std::ifstream inputFile("input.txt"); // Open the input file
    if (!inputFile) {
        std::cerr << "Failed to open input file!" << std::endl;
        return 1; // Return error if file opening fails
    }

    int vectorSize;
    inputFile >> vectorSize; // Read vector size from the first line

    std::vector<int> data(vectorSize);
    for (int i = 0; i < vectorSize; ++i) {
        inputFile >> data[i]; // Read elements of the vector from the second line
    }

    inputFile.close(); // Close the input file

    // Example usage of lower_bound function
    int valueToSearch = 10;
    int result = lower_bound(data, valueToSearch);
    std::cout << "Lower bound index for value " << valueToSearch << " is: " << result << std::endl;

    return 0;
}