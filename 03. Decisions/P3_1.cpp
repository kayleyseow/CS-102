// Kayley Seow
// 9/19/2020
// Lab 3
// P3.1, This program  reads a temperature value and the letter C for Celsius or F for Fahrenheit. Print whether water is liquid, solid, or gaseous at the given temperature at sea level.
int main() {
    double tempVal; 
    string tempType;
    cout << "Enter the temperature value and the letter C for Celsius or F for Fahrenheit.\n";
    cin >> tempVal >> tempType;
    if (tempType == "C")
    {
        if (tempVal >= 100) {
            cout << "Water is gaseous.\n";
        }
        else if (tempVal >= 0) 
        {
            cout << "Water is liquid.\n";
        }
        else // tempVal < 0
        {
            cout << "Water is solid.\n";
        }
    }
    else
    {
        if (tempVal >= 212) {
            cout << "Water is gaseous.\n";
        }
        else if (tempVal >= 32)
        {
            cout << "Water is liquid.\n";
        }
        else // tempVal < 32
        {
            cout << "Water is solid.\n";
        }
    }
}
