#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main()
{
    srand(time(0));             // Generating different number at different time
    int num = rand() % 100 + 1; // Generate num within 1-100
    int fl = 0, unum;

    while (fl == 0)
    {
        printf("\nEnter your number: ");
        scanf("%d", &unum);
        if (unum == num)
        {
            printf("\nYess! Generated number is %d", num);
            fl = 1;
        }
        else if (unum > num)
        {
            printf("\nYour number is higher than guessed number");
        }
        else
        {
            printf("\nYour number is lesser than guessed number");
        }
        
        
    }

    return 0;
}
