// Kayley Seow
// 9/6/2020
// Lab 2
// P2.8, This program prompts the user for the length and with and then prints the area, perimeter, and diagonal.

#include <iostream>
using namespace std;
int main() {
    int length, width;
    cout << "Enter the length and width\n";
    cin >> length >> width;
    cout
        << "Area: " << length * width
        << "\nPerimeter: " << length * 2 + width * 2
        << "\nDiagonal: " << sqrt(pow(length, 2) + pow(width, 2))
        << '\n';
}
