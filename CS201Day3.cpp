// Name: Shruthika Uduthuri
// Program 3 - Distance
// The program will do the following:
// a. Generate 4 random values: x1,y1,x2, and y2 which are coordinate points:
// (x1,y1) and (x2,y2) where each value is an integer between -10 and 10, inclusive.
// b. Calculate the distance of each point to the origin
// c. Print each point, its distance to the origin & which point (1 or 2) is closer to the
// origin
// d. Loop until the user decides to quit
// e. Bonus: allow the user to decide to enter these 4 values or let the program
// generate them. If the user enters them, then the values are verified to be
// numeric

// This code was written in the class.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    float dist1, dist2;
    char userChoice = 'Y';
    char userChoice2 = 'Y';

    srand(time(0)); // randomly seeds random generator

    while (userChoice == 'Y')
    {
        // get input
        cout << "Do you want to enter your own numbers? Y or N: ";
        cin >> userChoice2;
        userChoice2 = toupper(userChoice2);
        if (userChoice2 == 'Y')
        {
            cout << "Enter two numbers for the first point";
            cin >> x1 >> y1;
            cout << "Enter two numbers for the second point";
            cin >> x2 >> y2;
            // edit input;
        }
        else
        {
            // Logic for generating numbers from -10 to 10
            //  rand() % (max - min + 1) + start
            x1 = rand() % 21 - 10;
            y1 = rand() % 21 - 10;

            x2 = rand() % 21 - 10;
            y2 = rand() % 21 - 10;
        }

        // cout << "Enter two numbers";
        // cin >> x1 >> y1;
        dist1 = pow(pow(x1, 2) + pow(y1, 2), .5);
        cout << "The distance to the origin from the point (" << x1 << ", " << y1 << ") is " << dist1 << endl;

        dist2 = pow(pow(x2, 2) + pow(y2, 2), .5);
        cout << "The distance to the origin from the point(" << x2 << ", " << y2 << ") is " << dist2 << endl;

        if (dist1 < dist2)
        {
            cout << "Point 1 is closer \n";
        }
        else if (dist1 > dist2)
        {
            cout << "Point 2 is closer \n";
        }
        else
        {
            cout << "These are the same distance \n";
        }

        cout << "Go again? Y or N: ";
        cin >> userChoice;
    }
}