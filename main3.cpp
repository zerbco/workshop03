#include <iostream>
using namespace std;
extern double arrayMax(double *array, int n);

int main() {
    double array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "The max number is: " << arrayMax(array,size) << endl;

    return 0;
}