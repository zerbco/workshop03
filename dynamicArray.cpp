#include <iostream>

double* dynamicArray(int N) {
    double *array = new double[N];

    for (int i = 0; i < N; i++) {
        array[i] = i * 1.5;
    }

    return array;
}

double* dynamicArray(int N , double M) {
    double *array = new double[N];

    for (int i = 0; i < N; i++) {
        array[i] = M;
    }
    return array;
}
