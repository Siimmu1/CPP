#include <iostream>
#include <cmath>

// Function to calculate the arithmetic average of measurements
double calculateArithmeticAverage(double data[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum / size;
}

// Function to calculate the A type error
double calculateATypeError(double data[], int size) {
    double xa = calculateArithmeticAverage(data, size);
    double sumSqDiff = 0.0;
    for (int i = 0; i < size; ++i) {
        sumSqDiff += (data[i] - xa) * (data[i] - xa);
    }
    double v = size - 1;
    double t = 2.262; // t(v, beta) for beta = 0.95 and v = n - 1
    return t * sqrt(sumSqDiff / (size * (size - 1)));
}

int main() {
    const int size = 10;
    double measurements[size];

    // Input measurements from the user
    std::cout << "Enter " << size << " measurement elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> measurements[i];
    }

    double aTypeError = calculateATypeError(measurements, size);
    std::cout << "A type error of the measurement: " << aTypeError << std::endl;

    return 0;
}