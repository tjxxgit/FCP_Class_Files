// Program to check Vowel/Consonents using Switch case


#include <stdio.h>
int main (){

    char c;
    printf ("Enter the Character to be checked\n");
    scanf ("%c", &c);

    switch (c)
    {
    case 'a': 
        printf ("Vowel");
        break;
    case 'e': 
        printf ("Vowel");
        break;
    case 'i': 
        printf ("Vowel");
        break;
    case 'o': 
        printf ("Vowel");
        break;
    case 'u': 
        printf ("Vowel");
        break;
    
    default:
    printf ("Consonant");
        break;
    }

return 0;
}