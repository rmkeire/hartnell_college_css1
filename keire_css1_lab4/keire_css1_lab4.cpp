//Robin Keire

// Lab 4: Boolean Expressions and if Statements

// Last Modified: February 21,2021


#include <iostream>
using namespace std;

int main() {

    // Program #1: Number Lock Program
    int num_1, num_2, num_3;

    num_1 = 7;
    num_2 = 4;
    num_3 = 9;

    int input_1, input_2, input_3;

    cout << "Please enter your permutation using integers 0-9 for each digit." <<endl ;
    cin >> input_1;
    cin >> input_2;
    cin >> input_3;

    if (input_1 == num_1 && input_2 == num_2 && input_3 == num_3)
    {
        cout << "Opened \n\n";
    }

    // Program #2: Convert Fahrenheit to Celsius
    string soldier_name;
    float f_temp, c_temp;

    cout << "What is your name soldier? ";
    cin >> soldier_name;

    cout <<"Enter the temperature in Fahrenheit: ";
    cin >> f_temp;

    // Fahrenheit-Celsius Conversion Formula
    c_temp = (5*(f_temp - 32))/9;

    // Salutation and Conversion Output
    cout <<"Thanks for your service soldier " << soldier_name <<"." <<endl;

    // Float Precision Formatting: Nearest hundredth degree
    // https://www.geeksforgeeks.org/rounding-floating-point-number-two-decimal-places-c-c/
    cout <<"The equivalent to " << f_temp << " degrees Fahrenheit is " << printf("% .1f", c_temp) << " degrees Celsius.";

    return 0;
}

/* Output
Please enter your permutation using integers 0-9 for each digit.
5
9
6
What is your name soldier? Robin
Enter the temperature in Fahrenheit: 100
Thanks for your service soldier Robin.
The equivalent to 100 degrees Fahrenheit is  37.85 degrees Celsius.
Process finished with exit code 0
 *
 * <<<Correct permutation>>>>
 *
 * C:\Users\maxke\Documents\hartnell\css_1\class_c++\lab4\cmake-build-debug\lab4.exe
Please enter your permutation using integers 0-9 for each digit.
7
4
9
Opened

What is your name soldier?Robin
 Enter the temperature in Fahrenheit:100
 Thanks for your service soldier Robin.
The equivalent to 100 degrees Fahrenheit is  37.85 degrees Celsius.
Process finished with exit code 0
 */