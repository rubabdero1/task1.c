#include <stdio.h>
int main() {
    int i, catalan , n;
    int fact2n = 1, factn = 1, factn1 = 1;
    
    printf("Enter a number :");
    scanf("%d", &n);

    for(i =1; i <= 2*n;i++)
    {
        fact2n = fact2n * i;
    }

    for(i = 1; i <= n; i++)
    {
        factn = factn * i;
    }

    for(i = 1; i <= n + 1; i++)
    {
        factn1 = factn1 * i;
    }

    catalan = fact2n / (factn1 * factn);

    printf("Catalan number = %d", catalan);
       
    }
