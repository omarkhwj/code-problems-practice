#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

bool isIsomorphic(char* s, char* t) {
        int map[256] = {0};
        char map2[256] = {0};
        char c;
        char c2;
        int i;

        for (i = 0; (c = s[i]) != '\0'; i++) {
                c2 = map2[t[i]];
                if ((map[c] && (c != c2)) || (c2 && (c2 != c)) ) {
                        return false;
                }
                else {
                        map[c] = 1;
                        map2[t[i]] = c;
                }
        }
        return true;
}

int main(int argc, char* argv[]) {

	char* string1;
	char* string2;

	if (argc != 3) {
		string1 = malloc(4);
		string2 = malloc(4);

		printf("Enter the first string\n");
		scanf(" %[^\n]s", string1);
		printf("Enter the second string\n");
		scanf(" %[^\n]s", string2);
	} 
	else {
		string1 = argv[1];
		string2 = argv[2];
	}

	while (strlen(string1) != strlen(string2)) {
		printf("Strings are not the same length.\n");
		printf("Enter the first string\n");
		scanf("%[^\n]s", string1);
		printf("Enter the second string\n");
		scanf("%[^\n]s", string2);	
	}

	bool x = isIsomorphic(string1, string2);	
	printf("The strings are %s isomorphic\n", x ? "" : "not");
}
