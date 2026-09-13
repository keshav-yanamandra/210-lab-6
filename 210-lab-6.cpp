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
    // create dynamic array
    double *data = nullptr;
    data = new double[SIZE];

    //call funtion
    enterArrayData(data);


    // delete the array when done
    delete [] data;

    return 0;
}

void enterArrayData(double *arr) {
    cout << "Data entry for the array:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);
    }

    cout << "Data entry complete." << endl;
}