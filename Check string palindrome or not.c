#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];  
    
    printf("Enter the string: ");
    gets(str1);

    strcpy(str2,str1);
    strrev(str2);

    if(!strcmp(str1,str2)){
        printf("Given string is palindrome");
    }
    else
        printf("Given string is not palindrome");
    return 0;
}