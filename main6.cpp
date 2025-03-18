#include <iostream>
#include <cstdlib>
using namespace std;

extern double* dynamicArray(int N);
extern double arrayMax(double *array, int n);

int main() {

    srand(time(0));

    int size = 10;
    double *array1 = dynamicArray(size);

    double max = arrayMax(array1,size);
    cout << max << endl;

    delete[] array1;
    return 0;
}