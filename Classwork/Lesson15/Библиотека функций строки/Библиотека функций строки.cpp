//#include "mystringlib.h"
#include <cstring>

size_t mystrlen(const char* str) {
    size_t length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char* mystrcpy(char* str1, const char* str2) {
    char* result = str1;
    while ((*str1++ = *str2++) != '\0');
    return result;
}

char* mystrcat(char* str1, const char* str2) {
    char* result = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while ((*str1++ = *str2++) != '\0');
    return result;
}

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return nullptr;
}

char* mystrstr(char* str1, const char* str2) {
    char* p = str1;
    char* q = const_cast<char*>(str2);

    while (*p != '\0') {
        char* temp = p;
        while (*temp == *q && *temp != '\0' && *q != '\0') {
            temp++;
            q++;
        }
        if (*q == '\0') {
            return p;
        }
        p++;
        q = const_cast<char*>(str2);
    }
    return nullptr;
}
