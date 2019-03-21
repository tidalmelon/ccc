#include<iostream>
using namespace std;

int main() {

    //int **p;
    //cout << p << endl;

    int **p = NULL;
    cout << "address:" << p << endl;

    // allocate 4row 8col
    p = new int *[4];
    for (int i=0; i<4; i++) {
        p[i] = new int [8];
    }

    // assing value
    for (int i=0; i<4; i++) {
        for (int j=0; j<8; j++) {
            p[i][j] = i*j;
        }
    }

    // print data
    for (int i=0; i<4; i++) {
        for (int j=0; j<8; j++) {
            if (j==0) {
                cout << endl;
            }
            cout << p[i][j] << "\t";
        }
    }

    cout << endl;

    // free memory
    for (int i=0; i<4; i++) {
        delete [] p[i];
    }

    delete[] p;

    return 0;
}
