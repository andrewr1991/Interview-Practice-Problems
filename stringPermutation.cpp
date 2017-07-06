#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool stringPermutation1(string str1, string str2) {
	if (str1.length() != str2.length() || str1.length() == 0 || str2.length() == 0) {
		return false;
	}
		
	vector<int> vectorStr1(128, 0);
	vector<int> vectorStr2(128, 0);
	
	for (int i = 0; i < str1.length(); i++) {
		vectorStr1[str1[i]]++;
		vectorStr2[str2[i]]++;
	}
	
	if (vectorStr1 == vectorStr2) {
		return true;
	}
	else {
		return false;
	}
}

bool stringPermutation2(string str1, string str2) {
	if (str1.length() != str2.length() || str1.length() == 0 || str2.length() == 0) {
		return false;
	}
	
	int strTotal1 = 0, strTotal2 = 0;
	
	for (int i = 0; i < str1.length(); i++) {
		strTotal1 += str1[i];
		strTotal2 += str2[i];
	}
	
	if (strTotal1 == strTotal2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	
	if (stringPermutation2(str1, str2)) {
		cout << "The strings are permutations of one another" << endl;
	}
	else {
		cout << "The strings are not permutations of one another" << endl;
	}
}
	
