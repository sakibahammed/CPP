#include <iostream>
using namespace std;

int isprime();

int main()
{
    int num, i, value = 0;

    
    num = isprime();
    for (i = 2; i <= num/2; ++i)
    {
        if (num%i == 0)
        {
            value = 1;
            break;
        }
    }

    if (value == 1)
    {
        cout<<num<<" is not a prime number.";
    }
    else
    {
        cout<<num<<" is a prime number.";
    }
    return 0;
}


int isprime()
{
    int n;

    printf("Enter a positive integer to check: ");
    cin >> n;

    return n;
}