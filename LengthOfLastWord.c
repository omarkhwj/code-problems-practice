int lengthOfLastWord(char* s) {
    
    int i;
    int length = 0;
    char c;
    
    for (i=0; (c = s[i]) != '\0'; i++) {
        if (c != ' ') {
            length++;
        }
        else if (s[i+1] != '\0' && s[i+1] != ' ')
            length = 0;
    }
    return length;
}
