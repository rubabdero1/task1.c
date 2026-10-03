#include <stdio.h>
int main() {
    int num, digit;
    printf("Enter meter readings :");
    scanf("%d", &num);
    while(num != 0 )
    {
        digit=num%10;

    
    if(digit%2==0)
    {
        printf("Even readings");
    }
    else
    {
        printf("Odd readings");
    }
    
}
}