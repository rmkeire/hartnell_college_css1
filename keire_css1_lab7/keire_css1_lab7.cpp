// Robin Keire
// CSS1: Lab 7: Loops and Random Numbers
// Last Modified: 24/3/21

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <string>

using namespace std;

const int INTEGER_ARRAY_LENGTH = 10;
const int CLASS_SIZE = 10;


int main()
{
    // Program 1: Index Array Ordering and Sum

    int integer_array[INTEGER_ARRAY_LENGTH];

    int sum = 0;

    cout << "Program 1: Array Index Ordering and Sum\n\n";

    cout << "Please enter ten integers for the array\n";

    for (int i = 0; i < 10; i++) {
        cin >> integer_array[i];
    }

    cout << endl << endl;
    cout << "Ascending Index Order: ";
    for (int i = 0; i < 10; i++) {
        cout << integer_array[i] << " ";
    }

    cout << endl << endl;
    cout << "Descending Index Order: ";
    for (int i = INTEGER_ARRAY_LENGTH - 1; i >= 0; i--)
    {
        cout << integer_array[i] << " ";

    }

    cout << endl << endl;
    cout << "Integer Array Sum: ";
    for(int i = 0; i < 10; i++)
    {
        sum += integer_array[i];
    }
    cout << sum;

    cout << endl << endl;





    // Program 2: Dice Roll Simulation:
    // Executes as many times desired by the user
    // Goal: Roll enough times so that the results sum to 100

    srand(time(0));
    int roll_sum = 0;
    int roll_count = 1;
    char question;

    std::cout << "Dice Roll Game: Roll to 100\n\n";

    do {
        // Get random numbers from 1 to 10
        int roll = rand()%10+1;

        // Loss State:If the player rolls a 1 or their dice roll sum is greater than 100, the game ends
        if(roll == 1 || roll_sum > 100)
        {
            cout << "You lose!\n";
            break;
        }

            // Track dice rolls , game rounds, and dice roll sum
        else
        {
            cout << "Round: " << roll_count << " Roll: " << roll << " "
                 << "Roll Sum: " << roll_sum << endl;

            roll_sum += roll;
            roll_count += 1;

            // Win state: Play reaches 100 exactly
            if(roll_sum == 100)
            {
                cout << "You win! "
                     << "*" << roll_sum << "*"
                     << "Round: " << roll_count;
                roll_count = 0;
                break;
            }
        }

        // Continue game if the player wishes
        std::cout << "Would you like to roll again? Y or N?\n";
        std::cin >> question;

    } while (question == 'Y' || question == 'y');

    // Provide the number of rounds and the sume of the dice when the game ends
    cout << "Round End: " << roll_count << " Roll Sum: " << roll_sum << endl;





//     Program 3
//     Student Roster
//     Prompt user to enter students' names until all are entered, then output student roster

    string first_name;
    string last_name;
    string roster[CLASS_SIZE];

    cout << "---------- Student Roster ----------\n\n";

    cout << "Please enter your student's name\n";

    for(int i = 0; i <= 9; i++)
    {
        cin >> roster[i];
    }

    for(int i=0; i <=9; i++)
    {
        cout << roster[i] << endl;
    }

    return 0;
}

/**
Program 1: Array Index Ordering and Sum

Please enter ten integers for the array
1 2 3 4 5 6 7 8 9 10


Ascending Index Order: 1 2 3 4 5 6 7 8 9 10

Descending Index Order: 10 9 8 7 6 5 4 3 2 1

Integer Array Sum: 55

Dice Roll Game: Roll to 100

Round: 1 Roll: 6 Roll Sum: 0
Would you like to roll again? Y or N?
y
Round: 2 Roll: 2 Roll Sum: 6
Would you like to roll again? Y or N?
y
Round: 3 Roll: 6 Roll Sum: 8
Would you like to roll again? Y or N?
y
Round: 4 Roll: 4 Roll Sum: 14
Would you like to roll again? Y or N?
y
Round: 5 Roll: 5 Roll Sum: 18
Would you like to roll again? Y or N?
y
Round: 6 Roll: 7 Roll Sum: 23
Would you like to roll again? Y or N?
y
Round: 7 Roll: 9 Roll Sum: 30
Would you like to roll again? Y or N?
y
Round: 8 Roll: 9 Roll Sum: 39
Would you like to roll again? Y or N?
y
Round: 9 Roll: 5 Roll Sum: 48
Would you like to roll again? Y or N?
y
Round: 10 Roll: 3 Roll Sum: 53
Would you like to roll again? Y or N?
y
Round: 11 Roll: 8 Roll Sum: 56
Would you like to roll again? Y or N?
y
You lose!
Round End: 12 Roll Sum: 64
---------- Student Roster ----------

Please enter your student's name
Tom
Dick
Harry
Jane
Jill
Josephine
Meriweather
Ulysses
John
James
Tom
Dick
Harry
Jane
Jill
Josephine
Meriweather
Ulysses
John
James

Process finished with exit code 0
 **/

