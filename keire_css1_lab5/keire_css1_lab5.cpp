// Robin Keire
// Date Last Modified: February 26, 2021
// Lab 6: if/else, nested statements and switch statements

#include <iostream>
#include <cmath>

using namespace std;

// Global Variables for Change Counting Game

const float quarter_value = 0.25;
const float dime_value = 0.10;
const float nickel_value = 0.05;
const float penny_value = 0.01;

// Global Variables for Nested Statements tax program
const double single_first_tax_bracket = 0.1;
const double single_second_tax_bracket = 0.15;
const double single_third_tax_bracket = 0.25;

const double single_second_tax_bracket_base = 800;
const double single_third_tax_bracket_base = 4400;

const double married_first_tax_bracket_rate = 0.1;
const double married_second_tax_bracket_rate = 0.15;
const double married_third_tax_bracket_rate = 0.25;

const double married_second_tax_bracket_base = 1600;
const double married_third_tax_bracket_base = 8800;

int main() {

    // Program 1: Change Counting Game (if/else): Objective: Create exactly one dollar
    int quarters_count;
    int dimes_count;
    int nickels_count;
    int pennies_count;

    float quarters_value;
    float dimes_value;
    float nickels_value;
    float pennies_value;
    float total_money_value;

    // Prompt user to enter the number of each type of coin
    cout << "Please enter the number of quarters." << endl;
    cin >> quarters_count;
    cout << endl;

    cout << "Please enter the number of dimes." << endl;
    cin >> dimes_count;
    cout << endl;

    cout << "Please enter the number of nickels." << endl;
    cin >> nickels_count;
    cout << endl;

    cout << "Please enter the number of pennies." << endl;
    cin >> pennies_count;
    cout << endl;


    // Determine the amount of money for each coin type
    quarters_value = quarter_value * quarters_count;
    dimes_value = dime_value * dimes_count;
    nickels_value = nickel_value * nickels_count;
    pennies_value = penny_value * pennies_count;

    // Dertime total value on hand
    total_money_value = quarters_value + dimes_value + nickels_value + pennies_value;

    if (total_money_value > 1.00)
    {
        cout << "Sorry, the total value of your coins is greater than $1.00.\n\n\n" << endl;
    }

    else if (total_money_value == 1.00)
    {
        cout << "Congratulations, the total value of your coins equals $1.00\n\n\n" << endl;
    }

    else
    {
        cout << "Sorry, the total value of your coins is less than $1.00\n\n\n";
    }


    //  Program 2: Nested Statements (if/else with nested statements)
    string marital_status;
    double income;
    double income_tax;

    cout << "What is your marital status? single/married" << endl;
    cin >> marital_status;
    cout << endl;

    cout << "What is your income?" << endl;
    cin >> income;
    cout << endl;

    if (marital_status == "single")
    {
        if (income < 8001)
        {
            income_tax = income * single_first_tax_bracket;
        }

        else if (income >= 8001 && income <= 32000)
        {
            income_tax = single_second_tax_bracket_base + income * single_second_tax_bracket;
        }

        else
        {
            income_tax = single_third_tax_bracket_base + income * single_third_tax_bracket;
        }

    }

    else
    {
        if (income < 8001)
        {
            income_tax = income * married_first_tax_bracket_rate;
        }

        else if (income >= 16001 && income <= 64000)
        {
            income_tax = married_second_tax_bracket_base + income * married_second_tax_bracket_rate;
        }

        else
        {
            income_tax = married_third_tax_bracket_base + income * married_third_tax_bracket_rate;
        }
    }

    // Round up to the nearest dollar
    // http://www.cplusplus.com/reference/cmath/ceil/
    cout << "Your income tax is $ " << ceil(income_tax) << "\n\n\n";



    // Program 3: Calculator

    // arithmetic operator
    char arithmetic_operator;

    double number_1;
    double number_2;
    double result_value;

    string result_line = "The result is ";
    string result_line_punctuation = ".\n\n\n";

    cout << "Do you wish to add (+). subtract(-), multiply(*), or divide(/)?" << endl;
    cin >> arithmetic_operator;
    cout << endl;

    cout << "Please enter first number" << endl;
    cin >> number_1;
    cout << endl;

    cout << "Please enter second number" << endl;
    cin >> number_2;
    cout << endl;

    switch (arithmetic_operator)
    {
        case '+':
            result_value = number_1 + number_2;
            cout << result_line << result_value << result_line_punctuation;
            break;

        case '-':
            result_value = number_1 - number_2;
            cout << result_line << result_value << result_line_punctuation;
            break;

        case '*':
            result_value = number_1 * number_2;
            cout << result_line << result_value << result_line_punctuation;
            break;

        case '/':

            result_value = number_1 / number_2;
            cout << result_line << result_value << result_line_punctuation;
            break;

            // https://www.youtube.com/watch?v=TNUCZpgPjrw
        default:
            cout << "You did not enter an arithmetic operator.\n";
    }



    return 0;
}

/* Output

Please enter the number of quarters.
3

Please enter the number of dimes.
2

Please enter the number of nickels.
1

Please enter the number of pennies.
0

Congratulations, the total value of your coins equals $1.00



What is your marital status? single/married
married

What is your income?
130000

Your income tax is $ 41300


Do you wish to add (+). subtract(-), multiply(*), or divide(/)?
*

Please enter first number
9

Please enter second number
7

The result is 63.



Process finished with exit code 0

 */