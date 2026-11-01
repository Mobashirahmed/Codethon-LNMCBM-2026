#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(){
    // Enter your solution
    char text[100];
    // Enter the Text
    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';
    int len, i, vowel = 0;
    len = strlen(text);
    // Changing spaces with hyphen
    for(i=0; i<len; i++)
    {
        if(text[i]==' ')
        {
            text[i] = '-';
        }
    }
    // Finding vowels in Text
    for(i=0; i<len; i++)
    {
        if(text[i]=='A' || text[i]=='a')
        {
            vowel++;
        }
        else if(text[i]=='E' || text[i]=='e')
        {
            vowel++;
        }
        else if(text[i]=='I' || text[i]=='i')
        {
            vowel++;
        }
        else if(text[i]=='O' || text[i]=='o')
        {
            vowel++;
        }
        else if(text[i]=='U' || text[i]=='u')
        {
            vowel++;
        }
    }
    // Printing the result
    printf("%s\n%d", text, vowel);
    return 0;
}