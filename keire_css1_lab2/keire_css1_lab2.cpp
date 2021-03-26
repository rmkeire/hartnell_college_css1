//keire_lab2_variables_and_simple_arithmetic.cpp

//Robin Keire

// Date last modified: February 5, 2021

// Lab 2: Variables and Simple Arithmetic


#include <iostream>
using namespace std;

int main() {

    // Identity Prompt

    // Creating name and date variables.
    string first_name;
    string last_name;
    string birthday_month;
    int birthday_day;
    int birthday_year;

    // Asking user to input personal information.

    cout << "\nWhat is your first name? Ex. Mishka\n";
    cin >> first_name;

    cout << "What is your last name? Ex. Kobayakawa \n";
    cin >> last_name;

    cout << "What is your birthday month? Ex. August\n";
    cin >> birthday_month;

    cout << "Which day of the month is your birthday? Ex. 09\n";
    cin >> birthday_day;

    cout << "Which year were your born? Ex. 1999\n";
    cin >> birthday_year;

    // Questions generates prompt with information input by the user
    cout << "Your name is " << first_name;
    cout << " " << last_name;
    cout << " and your birthday is on " << birthday_month;
    cout << " " << birthday_day;
    cout << ", " << birthday_year;
    cout << ".";
    cout << "\n\n*****************************************\n\n";



    // grocery & gas spending calculator

    // Creating line item variables
    int grocery_charge;
    int gas_charge;


    // Asking input from the user about how much they spent on groceries and gasoline
    cout << "How much did you spend on groceries? Round to the nearest dollar and express it as a natural number.\n";
    cin >> grocery_charge;
    cout << "\n";
    cout << "How much did you spend on gas? Round to the nearest dollar and express it as a natural number\n";
    cin >> gas_charge;

    // Creating charge total
    int total_charges = grocery_charge + gas_charge;

    // Calculator ouput: Sum of all charges
    cout << "\nYour total spending is: $" << total_charges << endl;

    return 0;

}

/* Program Output

What is your first name? Ex. Mishka
Robin
What is your last name? Ex. Kobayakawa
Keire
What is your birthday month? Ex. August
October
Which day of the month is your birthday? Ex. 09
26
Which year were your born? Ex. 1999
1990
Your name is Robin Keire and your birthday is on October 26, 1990.

*****************************************

How much did you spend on groceries? Round to the nearest dollar and express it as a natural number.
45

How much did you spend on gas? Round to the nearest dollar and express it as a natural number
23

Your total spending is: $68

Process finished with exit code 0

*/

