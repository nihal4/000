#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int i, j, start, end, length;

    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    length = strlen(sentence);
    start = 0;

    
    for (i = 0; i <= length; i++) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;

            
            for (j = end; j >= start; j--) {
                printf("%c", sentence[j]);
            }

            
            if (sentence[i] == ' ') {
                printf(" ");
            }

            
            start = i + 1;
        }
    }

}
