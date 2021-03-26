// Robin Keire

// Lab 3: Program 2 Dairy Farm Problem

// Last Modified: February 14, 2021

/*
 * Problem Prompt:
 *
 * A milk carton can hold 3.78 liters of milk.
 * Each morning, a dairy farm ships cartons of milk to a local grocery store.
 * The cost of producing one liter of milk is $0.38, and the profit of each carton of milk is $0.27.
 *
 * Write a program that does the following:
 *
 * a. Prompts the user to enter the total amount of milk produced in the morning. (User can enter any number)
 *
 * b. Calculate how many cartons are needed to hold the amount of milk the user entered
 * and output the number of milk cartons needed to hold milk  (Output an integer).
 *
 * c. Outputs the cost of producing milk.
 *
 * d. Outputs the profit for producing milk.

*/

#include <iostream>

// Use library cmath to round see lines 58 and 59
#include <cmath>

using namespace std;

int main() {

    // Declaring and initializing known constants defined in the problem
    const double milk_carton_volume = 3.78;
    const double cost_of_goods_sold_per_unit = 0.38;
    const double profit_per_unit = 0.27;

    // Declaring variables to determine revenue, cost of goods sold, and gross profit
    double milk_production_volume_liters;
    double number_of_cartons_required;
    double cost_of_goods_sold;
    double gross_profit;

    // Asking user to enter the amount of milk produced as a decimal rounded
    cout << "Please enter the amount of milk produced in the morning. (To nearest deciliter)" << endl;

    cin >> milk_production_volume_liters;

    // Calculate number of whole cartons needed to store production volume and bring to market
    number_of_cartons_required = milk_production_volume_liters/milk_carton_volume;

    // Round number of cartons to nearest integer
    // Round function information source and example:
    // https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/
    number_of_cartons_required = round(number_of_cartons_required);

    cout << "Number of milk cartons required for storage: " << number_of_cartons_required << endl;

    // Provide user the cost of producing the milk

    cost_of_goods_sold = number_of_cartons_required * cost_of_goods_sold_per_unit;

    cout << "The cost to bring your milk to market is $" << cost_of_goods_sold << endl;

    // Provide gross profit
    // Assumption is gross profit was precalculated as revenue - cost of goods sold
    gross_profit = number_of_cartons_required * profit_per_unit;

    // Assumption based on profit given, dairy farmer is always making a profit after paying expenses
    cout << "The gross profit for the sale of this batch of milk is $" << gross_profit << endl;

    return 0;
}

/* Output
  Please enter the amount of milk produced in the morning. (To nearest deciliter)
  50.75
  Number of milk cartons required for storage: 13
  The cost to bring your milk to market is $4.94
  The gross profit (loss) for the sale of this batch of milk is $3.51
  Process finished with exit code 0
*/