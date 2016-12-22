#include <stdio.h>

float * ascendent(float array[], int size);

float * discendent(float array[], int size);


int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};

    int size = sizeof(array) / sizeof(array[0]);

    float * asc = ascendent(array, size);

    for (int i=0; i < size; i++) {
        printf("%f\n", asc[i]);
    }

    float * disc = discendent(array, size);

    for (int i=0; i < size; i++) {
        printf("%f\n", disc[i]);
    }

    return 0;
}


float * ascendent(float array[], int size) {

    float temp = 0;
    int j, i;
    for (i = 1; i < size; i++) {
        for (j = 0; j < size - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    return array;
}

float * discendent(float array[], int size) {

    float temp = 0;
    int j, i;
    for (i = 1; i < size; i++) {
        for (j = 0; j < size - i; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    return array;
}

