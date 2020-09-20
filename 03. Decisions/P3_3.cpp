// Kayley Seow
// 9/19/2020
// Lab 3
// P3.3, This program reads in three floating-point numbers and prints the largest of the three inputs.
int main() {
    double first, second, third;
    cout << "Enter the three floating point numbers to compare.\n";
    cin >> first >> second >> third;
    if (first >= second && second >= third)
    {
        cout << "The largest number is " << first << "\n";
    }
    else if (second >= first && second >= third)
    {
        cout << "The largest number is " << second << "\n";
    }
    else // (first >= second && second >= third)
    {
        cout << "The largest number is " << third << "\n";
    }
}
