#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_tens(int cents);
int calculate_fives(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    int tens = calculate_tens(cents);

    cents = cents - (tens * 10);

    int fives = calculate_fives(cents);

    cents = cents - (fives * 5);

    printf("%i\n", cents + quarters + tens + fives);
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_tens(int cents)
{
    // Calculate how many quarters you should give customer
    int tens = 0;
    while (cents >= 10)
    {
        tens++;
        cents = cents - 10;
    }
    return tens;
}

int calculate_fives(int cents)
{
    // Calculate how many quarters you should give customer
    int fives = 0;
    while (cents >= 5)
    {
        fives++;
        cents = cents - 5;
    }
    return fives;
}


