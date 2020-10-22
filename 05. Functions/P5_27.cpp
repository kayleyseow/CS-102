// Kayley Seow
// 10/20/2020
// Lab 5
// P5.27, This program uses a recursive function to reverse a string.

#include <iostream>
#include <string>
using namespace std;

string reverse(string str);

int main() {
	string word = "";
	cout << "Please enter a word to be reversed." << endl;
	cin >> word;
	cout << "Your word reversed is " << reverse(word) << ".\n";
}

string reverse(string str) {
	if (str.length() == 0)
	{
		return str;
	}
	else
	{
		return reverse(str.substr(1)) + str[0];
	}
}
