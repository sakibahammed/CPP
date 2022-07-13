#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    while (1)
    {
        /* code */
        int guessNumber, randomNumber;

        cout << "Enter your Guess into 1-5" << endl;
        cin >> guessNumber;

        randomNumber = rand() % 5 + 1;

        if (guessNumber == randomNumber)
        {
            cout << "You have Won" << endl;
        }
        else
        {
            cout << "You have lost" << endl;
            cout << "Random Number was : " << randomNumber << endl;
        }
    }
}
