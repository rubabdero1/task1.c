#include <stdio.h>
int main() {
     int n, row, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1)
    {
        for (row = 1; row <= 2 * n - 1; row++)
        {
            i = (row <= n) ? row : 2 * n - row;
         for (j = 1; j <= n - i; j++)
            {
                printf(" ");
            }

           
            printf("*");
             if (i > 1)
            {
                for (j = 1; j <= 2 * i - 3; j++)
                {
                    printf(" ");
                }
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("Please enter a number greater than 0.\n");
    }

    return 0;
}





    

