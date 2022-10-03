#include <cs50.h>
#include <stdio.h>
#include <string.h>

const string ICON = "#";

void generate(int);
void leftSide(int, int);
void rightSide(int);

int main(void)
{
    int heigth;

    // Heigth's validation
    do
    {
        // Heigth's capture
        heigth = get_int("Height: ");
    }
    while (heigth < 1 || heigth > 8);
    generate(heigth - 1);
}

void rightSide(int count)
{
    for (int i = 0; i <= count; i++)
    {
        // PRINT ICON, I TIMES
        printf("%s", ICON);
    }
}

void leftSide(int heigth, int count)
{
    printf("\n");
    for (int i = 0; i <= (heigth - count - 1); i++)
    {
        // PRINT (heigth - count - 1) SPACES
        printf(" ");
    }
    rightSide(count);
    printf("  ");
}

void generate(int heigth)
{
    for (int i = 0; i <= heigth; i++)
    {
        leftSide(heigth, i); // PRINT LEFT SIDE
        rightSide(i); // PRINT RIGTH SIDE
    }
    printf("\n");
}
