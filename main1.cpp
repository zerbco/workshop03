#include <iostream>
using namespace std;
extern void changeValue(double *ptr);

int main() {
    double n = 27.5;
    char letter = 'B';

    changeValue(&n);
    double *ptr_double = &n;
    char *ptr_letter = &letter;

    cout << *ptr_double << endl;

    return 0;
    
}