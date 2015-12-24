#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int countChars (char* sentence) {

        int count[256] = {0};
        int uniqueCharCount;
        int i;
	char c;
        for (i = 0; (c = sentence[i]) != '\0'; i++) {

                if (!count[c]) {
                        count[c] = 1;
                        uniqueCharCount++;
                }
        }

        printf("Unique characters count: %d \n", uniqueCharCount);
        return uniqueCharCount;
}

int main() {

	char* input = malloc(4);
	printf("Enter sentence\n");
	scanf("%[^\n]s", input);

	countChars(input);

}
