// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 6

#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double*);
void outputArrayData(double*);
double sumArray(double*);

int main() {
    double *data = nullptr;
    data = new double[SIZE];

    delete [] data;

    return 0;
}