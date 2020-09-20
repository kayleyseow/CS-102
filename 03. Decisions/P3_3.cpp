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
