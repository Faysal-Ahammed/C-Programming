#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    int i, len1 = 0, len2 = 0;
    int result;

    printf("Enter First String : ");
    scanf("%s", str1);
    printf("Enter Second String : ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    for(i=0; str2[i] != '\0'; i++){
        len2++;
    }
    
    if(len1==len2){
        if(!strcmp(str1,str2)){
            printf("Same");
        }
        else{
            printf("Not Same");
        }
        
    }
    else{
        printf("Not Same");
    }
    return 0;
}
