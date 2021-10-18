#include <stdbool.h>
#include <string.h>

bool CheckPermutation(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) {
        return false;
    }
    int hash[256] = {0};
    for (int i = 0; i < strlen(s1); i++) {
        hash[s1[i]]++;
        hash[s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (hash[i] != 0) {
            return false;
        }
    }
    return true;
}