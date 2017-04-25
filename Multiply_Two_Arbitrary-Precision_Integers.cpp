#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = {1, 4, 8, 3};
    vector<int> B = {4, 7, 9, 2};
    vector<int> X;

    int resultA = 0, resultB = 0, result = 0, digit = 0;

    for (int i = 0; i < A.size(); i++) {
        resultA = (resultA * 10) + A[i];
        cout << resultA << endl;
    }

    cout << "******" << endl;

    for (int i = 0; i < B.size(); i++) {
        resultB = (resultB * 10) + B[i];
        cout << resultB << endl << endl;
    }

    result = resultA * resultB;

    while (result > 10) {
        digit = result % 10;
        result = (result - digit) / 10;
        X.insert(X.begin(), digit);
    }
    X.insert(X.begin(), result);

    for (int i = 0; i < X.size(); i++) {
        cout << X[i];
    }
    return 0;
}
