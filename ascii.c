#include <stdio.h>
int main()
{
    char c;
    int n;
    printf("Enter any character : ");
    scanf("%c",&c);
    n = c;
    if( n>=65 && n<=90 )
        printf("You've entered an upper case letter. ");
    else if( n>=97 && n<=122 )
        printf("\nYou've entered a lower case letter. ");
    else if( n>=48 && n<=57 )
        printf("\nYou've entered a digit. ");
    else if( n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127 )
        printf("\nYou've entered a special symbol. ");

    return 0;
}
