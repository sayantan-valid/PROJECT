#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

#define limit 10
#define max 100

int ispresent(int num);

int list[max], n = 0;
void main()
{
    srand(time(NULL));
    int number, guess, count;
    char opt;
    do
    {
        int last_low = 0, last_high = max;
        number = rand() % max + 1;
        count = 0;
        do
        {
            if (last_high - last_low == 2 || count >= limit)
            {
                printf("\n  You Loose the game...  Actual number is %d\n\n", number);
                break;
            }

            if (count == 0)
                printf("\n Enter the number (1 To 100): ");
            else
                printf("\n Enter the number (1 To 100) [%d Attempt left]: ", (limit - count));
            scanf("%d", &guess);

            if (number == guess)
                printf("\n Congratulation!, \n You guessed the correct number in %d time\n", count);
            else if (guess > max || guess < 1)
            {
                printf(" Out of range Number!!,,, \n");
            }
            else
            {
                if (ispresent(guess) == 0)
                {
                    count += 1;
                }
                if (guess < number)
                {
                    printf(" -->>-- Higher -->>--\n");
                    if (last_low < guess)
                    {
                        last_low = guess;
                    }
                }
                else
                {
                    printf(" --<<-- Lower --<<--\n");
                    if (last_high > guess)
                    {
                        last_high = guess;
                    }
                }
            }

        } while (number != guess);

        printf("\n Do You want to play Again? (Y/N) ");
        opt = getch();
    } while (tolower(opt) == 'y');
}

int ispresent(int num)
{
    for (int i = 0; i < n; i++)
    {
        if (list[i] == num)
            return 1;
    }

    list[n++] = num;
    return 0;
}