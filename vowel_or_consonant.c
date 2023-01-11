//C program to check whether the alphabet is vowel or consonant in loop by adi 
#include <stdio.h>
int main()
{
    int i;
    char ch;
    for(i=0;i<7;i++){
    printf("Enter any alphabet:");
    scanf("%s", &ch);
    switch(ch)
    {
        case 'a': 
            printf("\nVowel\n");
            break;
        case 'e': 
            printf("\nVowel\n");
            break;
        case 'i': 
            printf("\nVowel\n");
            break;
        case 'o': 
            printf("\nVowel\n");
            break;
        case 'u': 
            printf("\nVowel\n");
            break;
        case 'A': 
            printf("\nVowel\n");
            break;
        case 'E': 
            printf("\nVowel\n");
            break;
        case 'I': 
            printf("\nVowel\n");
            break;
        case 'O': 
            printf("\nVowel\n");
            break;
        case 'U': 
            printf("\nVowel\n");
            break;
        default: 
            printf("\nConsonant\n");
    }}
    return 0;
}