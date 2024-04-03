#include <iostream>
#include <cstring>

void MySortString(char* strings[]) {
    int n = 0;
    while (*(strings + n) != nullptr) {
        n++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(*(strings + i), *(strings + j)) > 0) {
                char* temp = *(strings + i);
                *(strings + i) = *(strings + j);
                *(strings + j) = temp;
            }
        }
    }
}