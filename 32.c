#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, a;
 
    printf("enter the string\a");
    scanf("%[^\a]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\a", count + 1);
}
