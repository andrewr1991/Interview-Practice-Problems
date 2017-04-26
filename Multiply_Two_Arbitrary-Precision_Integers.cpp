/*
* Code to concatenate the elements of two separate arrays into two separate
* integer variables. The integer variables are then multiplied together and the result
* is "unconcatenated" and inserted, digit by digit, back into a third array and returned to main.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> precisionInteger(vector<int> A, vector<int> B) {
    vector<int> X;

    int resultA = 0, resultB = 0, result = 0, digit = 0;

    for (int i = 0; i < A.size(); i++) {
        resultA = (resultA * 10) + A[i];
    }

    for (int i = 0; i < B.size(); i++) {
        resultB = (resultB * 10) + B[i];
    }

    result = resultA * resultB;

    while (result > 10) {
        digit = result % 10;
        result = (result - digit) / 10;
        X.insert(X.begin(), digit);
    }
    X.insert(X.begin(), result);

    return X;
}

int main() {
    vector<int> A = {1, 4, 8, 3};
    vector<int> B = {4, 7, 9, 2};

    vector<int> result = precisionInteger(A, B);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }

    return 0;
}
