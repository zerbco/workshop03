#include <iostream>
#include <cstdlib>
using namespace std;

extern double* dynamicArray(int N , double M);

int main() {
    int size = 10;
    double value = 21;
    double *array = dynamicArray(size,value);

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;

    return 0;
}
