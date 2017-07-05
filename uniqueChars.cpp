#include <iostream>
#include <vector>

using namespace std;

bool uniqueChars1(string str) {
	for (int i = 0; i < str.size(); i++) {
		for (int k = 0; k < str.size(); k++) {
			if (str[i] == str[k] && i != k) {
				return false;
			}
		}
	}
	return true;
}

bool uniqueChars2(string str) {
	vector<bool> arr(128, false);
	
	for (int i = 0; i < str.size(); i++) {
		if (arr[str[i]] == true) {
			return false;
		}
		arr[str[i]] = true;
	}
	return true;
}

int main() {
	
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	
	if (uniqueChars2(str)) {
		cout << "The string has all unique characters" << endl;
	}
	else {
		cout << "The string does not have all unique characters" << endl;
	}
	return 0;
}
	
