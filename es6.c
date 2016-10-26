#include <stdio.h>

int main() {
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };

    int size = sizeof(array) / sizeof(array[0]);

    float avg = 0;

    for (int i = 0; i < size; i++) {
        avg += array[i];
    }

    printf("The average is %f", avg / size);

    return 0;
}



