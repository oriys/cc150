#include <string.h>
#include <stdio.h>

char *replaceSpaces(char *S, int length) {
    int len = strlen(S);
    int cur = len - 1;
    for (int i = length - 1; i >= 0; i--) {
        if (S[i] == ' ') {
            S[cur--] = '0';
            S[cur--] = '2';
            S[cur--] = '%';
        } else {
            S[cur--] = S[i];
        }
    }
    return S + cur + 1;
}