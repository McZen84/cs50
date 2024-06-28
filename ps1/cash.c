#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    float cents;
    do
    {
        cents = get_float("Change owed: ");
    }
    while (cents <= 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    int total = quarters + dimes + nickels + pennies;

    printf("%i\n", total);
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters
    int quarters = cents / 25;

    return quarters;
}

int calculate_dimes(int cents)
{
    // Calculate how many dimes
    int dimes = cents / 10;

    return dimes;
}

int calculate_nickels(int cents)
{
    // Calculate how many nickels
    int nickels = cents / 5;

    return nickels;
}

int calculate_pennies(int cents)
{
    // Calculate how many nickels
    int pennies = cents / 1;

    return pennies;
}


