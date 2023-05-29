// pair_sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int summy[2000000];
int N[999999];
int M[2000000];

int main()
{

    int nN, nM;
    cin >> nN >> nM;
    int inN, inM;

    //เก็บข้อมุลใส่ N
    for (int i = 0; i < nN; i++) {
        //int inN;
        cin >> inN;
        N[i] = inN;
    }
    for (int i = 0; i < nN; i++) {
        cout << N[i] << endl;
    }
    //เก็บข้อมูลใส่ M
    for (int i = 0; i < nM; i++) {
        //int inN;
        cin >> inM;
        M[i] = inM;
    }

    int summa;
    bool zero_in = false;
    for (int i = 0; i < nN - 1; i++) {
        for (int j = i + 1; i < nN; j++) {
            summa = N[i] + N[j];
            if (summa == 0) {
                summy[0] = 1;
            }
            else if (summy[summa] != summa) {
                summy[summa] = summa;
            }

        }
    }

    for (int i = 0; i < nM; i++) {
        if (M[i] != summy[M[i]]) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
