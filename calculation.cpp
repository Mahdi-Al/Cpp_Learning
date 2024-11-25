#include <iostream>
using namespace std;

struct Result {
    double totalEven;
    double multiplication;
};


Result calculateEvenAndOdd(double numbers[], int size = 10) {
    double totalEven = 0.0;
    double multiplication = 1.0;
    for (int i = 0; i < size; ++i) {
        if (static_cast<int>(numbers[i]) % 2 == 0) {
            totalEven += numbers[i];
        } else {
            multiplication *= numbers[i];
        }
    }
    cout << "Total Even: " << totalEven << " Multiplication Odd: " << multiplication << endl;
    return {totalEven, multiplication};
}

int main() {
    const int size = 10; 
    double numbers[size] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    Result result = calculateEvenAndOdd(numbers, size);
    cout << "Final Output - Total Even: " << result.totalEven << ", Multiplication Odd: " << result.multiplication << endl;

    return 0;
}