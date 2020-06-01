#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "This is the Palindrome Checker!" << endl;
	bool loop = true;
	while (loop) {
		string entered = "";
		cout << "Enter word or phrase to see if it is a palindrome or not. Enter q to quit the program." << endl;
		getline(cin, entered);
		if (entered == "q" || entered == "Q") {
			break;
		}
		cout << "The entered word/phrase is " << entered << endl;

		bool isPalindrome = true;
		int first = 0, last = entered.size() - 1;
		while (first < last) {
			if (entered[first] != entered[last]) {
				isPalindrome = false;
				break;
			}
			first++;
			last--;
		}

		if (isPalindrome == true) {
			cout << "The entered phrase is a palindrome." << endl;
		}
		else {
			cout << "The entered phrase is not a palindrome." << endl;
		}
	}

	cout << "Thank you for using the palindrome checker." << endl;
	system("pause");
}