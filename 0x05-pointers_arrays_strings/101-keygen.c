#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* C Program Strong Password Generator*/

int main (void)
{
    int i = 0, x = 0, y = 0, z = 0;

    char* alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char* num = "0123456789";
    char* sym = "`~!@#$%^&*()_-+={}[]\\|:;\"'<>,.?/";

        srand (time (NULL));


        printf ("Your Password: ");

        for (i = 0; i < 8; i++)
        {
                x = (rand () % 51) + 1;
                y = (rand () % 9) + 1;
                z = (rand () % 31) + 1;
                printf ("%c%c%c", alp[x], num[y], sym[z]);
        }

        return 0;
}
