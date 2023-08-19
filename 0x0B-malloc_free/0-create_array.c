#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(sizeof(char) * size);

    if (array == NULL) {
        return NULL; // Allocation failed
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c; // Initialize each element with the specified character
    }

    return array;
}

