// Robin Keire
// CSS 1: Lab 6
// Last modified : March 15, 2021
//

# include <iostream>
# include <cstdlib>
# include <ctime>

int main() {

    // Temperature While Loop
    // Create a while loop to determine when the magnitude of degrees Celsius and Fahrenheit are equivalent.

    std::cout << "Celsius and Fahrenheit Equivalency Calculator\n\n";

    double celsius = 100;

    double fahrenheit = ((9 * celsius) / 5) + 32;

    while (fahrenheit != celsius)
    {
        celsius--;
        fahrenheit = ((9 * celsius) / 5) + 32;
    }


    std::cout << "Celsius and Fahrenheit are equivalent at " << celsius << " degrees celsius\n\n\n\n";


    // Restaurant Do While Loop
    int choice;
    std::string menu_choice;
    char input;
    double bill_subtotal = 0;
    double bill_total;
    double sales_tax = 0.08;

    do {

        // Present menu prices to user
        std::cout << "Welcome to my restaurant! Please look at the menu and make a selection\n\n";

        std::cout << "Food Menu\n\n";
        std::cout << "1. Pizza        $3.00\n";
        std::cout << "2. Burger       $5.00\n";
        std::cout << "3. Sandwich     $3.00\n\n";

        std::cout << "Beverage Menu\n\n";
        std::cout << "4. Soft Drink  $2.00\n";
        std::cout << "5. Latte       $3.50\n";
        std::cout << "6. Espresso    $1.00\n";
        std::cout << "7. Water       $0.00\n";

        std::cout << "Dessert Menu\n\n";
        std::cout <<  "8. Cake       $4.00\n";
        std::cout <<  "9. Ice Cream  $2.50\n";
        std:: cout << "10. Cookie     $1.00\n";

        // Ask user for their selection
        std::cout << "Please enter your selection's menu number. Ex. 11\n\n\n";

        std::cin >> choice;

        if(choice >= 1 && choice <= 10)
        {
            switch (choice) {
                case 1:
                    bill_subtotal += 3.00;
                    menu_choice += "Pizza";
                    break;

                case 2:
                    bill_subtotal += 5.00;
                    menu_choice += "Burger";
                    break;
                case 3:
                    bill_subtotal += 3.00;
                    menu_choice = "Sandwich";
                    break;
                case 4:
                    bill_subtotal += 2.00;
                    menu_choice += "Soft Drink";
                    break;
                case 5:
                    bill_subtotal += 3.50;
                    menu_choice += "Latte";
                    break;
                case 6:
                    bill_subtotal += 1.00;
                    menu_choice += "Espresso";
                    break;
                case 7:
                    bill_subtotal += 0;
                    menu_choice += "Water";
                    break;
                case 8:
                    bill_subtotal += 4.00;
                    menu_choice += "Cake";
                    break;
                case 9:
                    bill_subtotal += 2.50;
                    menu_choice += "Ice Cream";
                    break;
                case 10:
                    bill_subtotal += 1.00;
                    menu_choice += "Cookie";
                    break;
            }
        }
        else
        {
            std::cout << "Please make a selection 1 through 12.\n\n";
        }


        // Ask user if they would like to go through the menue again
        std::cout << "Would you like to order another item? Y or N?\n\n";
        std::cin >> input;

    }while(input == 'y' || input=='Y');

    // Total bill
    bill_total = bill_subtotal + (bill_subtotal * sales_tax);

    std::cout << "Your bill totals to " << bill_total << std::endl <<std::endl;

    // For Loop Print ten numbers and sum those numbers
    std::cout << "1 to 10 Loop\n\n";
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += 1;
        std::cout << sum << std::endl <<std::endl;
    }
    std::cout << "1 multiplied by 10 is " << sum << "." << std::endl << std::endl;


    // Coin Toss Game
    // Simulates a coin toss and outputs "heads" or "tails" for each toss.
    srand(time(0));
    char question;

    std::cout << "Coin Toss Game\n\n";

    do {
        int toss = rand()%2+1;

        switch (toss) {
            case 1:
                std::cout << "Heads!\n\n";
                break;
            case 2:
                std::cout << "Tails!\n\n";
                break;
        }

        std::cout << "Would you like to execute again? Y or N?\n";
        std::cin >> question;
    } while (question == 'Y' || question == 'y');

    return 0;
}

/*
 Celsius and Fahrenheit Equivalency Calculator

Celsius and Fahrenheit are equivalent at -40 degrees celsius



Welcome to my restaurant! Please look at the menu and make a selection

Food Menu

1. Pizza        $3.00
2. Burger       $5.00
3. Sandwich     $3.00

Beverage Menu

4. Soft Drink  $2.00
5. Latte       $3.50
6. Espresso    $1.00
7. Water       $0.00
Dessert Menu

8. Cake       $4.00
9. Ice Cream  $2.50
10. Cookie     $1.00
Please enter your selection's menu number. Ex. 11


10
Would you like to order another item? Y or N?

y
Welcome to my restaurant! Please look at the menu and make a selection

Food Menu

1. Pizza        $3.00
2. Burger       $5.00
3. Sandwich     $3.00

Beverage Menu

4. Soft Drink  $2.00
5. Latte       $3.50
6. Espresso    $1.00
7. Water       $0.00
Dessert Menu

8. Cake       $4.00
9. Ice Cream  $2.50
10. Cookie     $1.00
Please enter your selection's menu number. Ex. 11


5
Would you like to order another item? Y or N?

y
Welcome to my restaurant! Please look at the menu and make a selection

Food Menu

1. Pizza        $3.00
2. Burger       $5.00
3. Sandwich     $3.00

Beverage Menu

4. Soft Drink  $2.00
5. Latte       $3.50
6. Espresso    $1.00
7. Water       $0.00
Dessert Menu

8. Cake       $4.00
9. Ice Cream  $2.50
10. Cookie     $1.00
Please enter your selection's menu number. Ex. 11


3
Would you like to order another item? Y or N?

n
Your bill totals to 8.1

1 to 10 Loop

1

2

3

4

5

6

7

8

9

10

1 multiplied by 10 is 10.

Coin Toss Game

Heads!

Would you like to execute again? Y or N?
y
Tails!

Would you like to execute again? Y or N?
y
Heads!

Would you like to execute again? Y or N?
y
Heads!

Would you like to execute again? Y or N?
y
Heads!

Would you like to execute again? Y or N?
y
Tails!

Would you like to execute again? Y or N?
y
Tails!

Would you like to execute again? Y or N?
y
Tails!

Would you like to execute again? Y or N?
y
Heads!

Would you like to execute again? Y or N?
y
Tails!

Would you like to execute again? Y or N?
y
Heads!

Would you like to execute again? Y or N?
n

Process finished with exit code 0
 */