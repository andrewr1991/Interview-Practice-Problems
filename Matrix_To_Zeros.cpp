#include <iostream>

using namespace std;

int main() {
	int m[3][3] = {{1, 0, 3}, {2, 3, 1}, {3, 2, 1}};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (m[i][j] == 0) {
				for (int a = i; a < 3; a++) {
					m[a][j] = 0;
				}
					
				for (int b = 0; b < 3; b++) {
					m[i][b] = 0;
				}
			}
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m[i][j];
		}
		cout << endl;
	}
}
