#include <iostream>
using namespace std;


double calculateAverage(double numbers[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum / size;
}


void showNumbersAboveAverage(double numbers[], int size, double average) {
    cout << "Numbers greater than the average (" << average << "): ";
    for (int i = 0; i < size; ++i) {
        if (numbers[i] > average) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int size = 10; 

 
    double numbers[size] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    
    double average = calculateAverage(numbers, size);

    
    showNumbersAboveAverage(numbers, size, average);

    return 0;
}
