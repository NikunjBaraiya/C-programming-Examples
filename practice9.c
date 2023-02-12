#include <stdio.h>
char reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        // printf("%c", c);
        reverseSentence(c);
        printf("%c", c);
    }
}

int main() 
{
    // for (int i = 0; i < 10; i++)
    // {
        printf("\nEnter a sentence: ");
        reverseSentence();
    // }
    return 0;
    
}


