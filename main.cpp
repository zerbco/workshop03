#include <iostream>
#include <cstdlib>
#include <ctime>
#include "workshop.h"
using namespace std;

void changeValue(double *ptr) {
    *ptr = 42;
}

void printArray(double *array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

double arrayMax(double *array, int n) {
    if (n == 0) {
        return 0;
    }
    double max = array[0];
    for (int i = 0; i < n; i++ ) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double* dynamicArray(int N) {
    double *array = new double[N];
    for (int i = 0; i < N; i++) {
        array[i] = i * 1.5;
    }
    return array;
}

double* dynamicArray(int N, double M) {
    double *array = new double[N];
    for (int i = 0; i < N; i++) {
        array[i] = M;
    }
    return array;
}

int main() {
    srand(time(0));
    int size = 10;
    double *array1 = dynamicArray(size);
    double max = arrayMax(array1, size);
    cout << max << endl;
    delete[] array1;
    return 0;
}