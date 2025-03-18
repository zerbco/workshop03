#include <iostream>
using namespace std;

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