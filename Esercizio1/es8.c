#include <stdio.h>

float medium(float array[], int size);

float * sort(float array[], int size);

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};

    int size = sizeof(array) / sizeof(array[0]);

    float * support = sort(array, size);

    printf("The medium is %f\n", medium(support, size));
    printf("The max is %f\n", support[size - 1]);
    printf("The min is %f\n", support[0]);

    return 0;
}


float medium(float array[], int size) {
    float medium = 0;
    if (size % 2 == 1) {
        medium = array[(size-1) / 2];
    } else {
        medium = (array[(size / 2) - 1] + array[(size / 2) ]) / 2;
    }

    return medium;
}

float * sort(float array[], int size) {

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

