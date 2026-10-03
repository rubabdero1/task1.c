#include <stdio.h>
int main() {
 char word[10];
    int i,length = 0;
    int vowels = 0;
    int consonants = 0;
    int palindrome;

    printf("Enter a word:");
    scanf("%s", word);

    printf("print original word : %s\n",word);

    while(word[length]!= '0')
    {
        length++;
    }

    printf("Length : %d\n", length);

    printf("Reversed word :");

    for(i=length-1; i>=0;i--)
    {
        printf("%c",word[i]);
    }
    printf("\n");

    for(i=0;i<length/2;i++)
    {
if(word[i]!= word[length-1-i])
{
    palindrome=0;
    break;
}

    }
    if(palindrome==1)
{
    printf("palindrome.\n");
}
else {
    printf("not a palindrome.\n");
}

for(i=0; i <length; i++)
{
if (word[i] =='a' || word[i] == 'e'
|| word[i] == 'i' || word[i] == 'o'
|| word[i] == 'u')
{
    vowels++;
}
else
{
    consonants++;
}
}
printf("Vowels : %d",vowels);
printf("Consonants : %d",consonants);

return 0;






}