#include <stdio.h>

int main() {
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };

    int size = sizeof(array) / sizeof(array[0]);

    float avg = 0;
    int weight = 0;
    int p = size, j = 0;


    while (p > 0) {
        p--;
        float support = array[j]*p;
        avg += support;
        j++;
    }

    for (int i = 0; i < size; i++) {
        weight += i;
    }


    printf("The average is %f", avg / weight);

    return 0;
}


