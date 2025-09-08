#include <stdio.h>
int main()
{
    int password;
    int attempts = 5;
    int attemptsdone = 1; // 1st attempt count start
    password = 12345678; // Default Password
    int userpasswordenter;

    printf("\nWelcome to the Vault! Enter Password in *%d Attempts*: ", attempts);
    scanf("%d", &userpasswordenter);

    if (userpasswordenter == password)
    {
        printf("\nCorrect Password entered in 1'st attempt! Access Granted\n");
    }
    else
    {
        while (attemptsdone < attempts)
        {
            printf("\nWrong Password!\nAttempts Done: %d\nEnter Password Again: ", attemptsdone);
            scanf("%d", &userpasswordenter);
            attemptsdone++;

            if (userpasswordenter == password)
            {
                printf("\nCorrect Password entered in %d attempt(s)! Access Granted.\n", attemptsdone);
                break;
            }
            if (attemptsdone == attempts && userpasswordenter != password)
            {
                printf("\nAttempts Exhausted! Vault Locked.\n");
                break;
            }
        }
    }

    printf("\nMade by Shantanu\n");
    return 0;
}
