#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int countChars (char* sentence) {

        int count[256] = {0};
        int uniqueCharCount;
        int i;
        for (i = 0; i < strlen(sentence); i++) {

                if (!count[sentence[i]]) {
                        count[sentence[i]] = 1;
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
