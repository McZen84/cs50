#include <stdio.h>
#include <cs50.h>
#include <string.h>

long card_number;
int length = 0;

int main(void)
{
     // get creditcard number
    card_number = get_long("Number: ");

    // get length of creditcard number
    long l = card_number;
    while(l > 0)
    {
        l = (l / 10);
        length++;
    }
    // check length
    if(length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }
// calculate checksum
    int last_digit, second_last_digit;
    int Sum1 = 0;
    int Sum2 = 0;
    int Total = 0;
    long x = card_number;
    do
    {
        //  remove last digit
        last_digit = x % 10;
        x = x / 10;
        Sum1 = Sum1 + last_digit;

        // remove last digit and solve doubled
        second_last_digit = x % 10;
        x = x / 10;

        // adding digits to sum
        second_last_digit = second_last_digit * 2;
        int d1 = second_last_digit % 10;
        int d2 = second_last_digit / 10;
        Sum2 = Sum2 + d1 + d2;
 }

    while (x > 0);
    Total = Sum1 + Sum2;

    // check algorithm result
    if(Total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Removes all the digits from card number except first 2
    int first, second, num;
    while (card_number >= 100)
    {
        card_number /= 10;
    }

    // Gets first two digits
    second = card_number % 10;
    card_number /= 10;
    first = card_number % 10;
    num = first * 10 + second;

    // check which card
    if ((length == 15) && (num == 34 || num == 37))
        {
            printf("AMEX\n");
        }

    else if ((length == 16) && (num >= 51 && num <= 55))
        {
            printf("MASTERCARD\n");
        }

    else if ((length == 13 || length == 16) && (num >= 40 && num <= 49))
        {
            printf("VISA\n");
        }
    else
    {
        printf("INVALID\n");
    }
}












