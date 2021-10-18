#include<stdio.h>
#include <stdbool.h>
#include <strings.h>

bool isUnique(char *astr) {
    int hash[26] = {0};
    for (int i = 0; i < strlen(astr); i++) {
        hash[astr[i] - 97]++;
        if (hash[astr[i] - 97] > 1) {
            return false;
        }
    }
    return true;
}
