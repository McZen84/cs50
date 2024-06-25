#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // Print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        // Print pyramid
        print_row(height - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // print bricks
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}
