#include <stdio.h>
#include <stdlib.h>

int * sort(int array[], int size);

int main() {
    FILE *file;
    file = fopen("numbers.txt", "r");

    int array[100];
    int size = sizeof(array) / sizeof(array[0]);


    for (int i = 0; i < size; i++) {
        fscanf(file, "%d" , &array[i]);
    }

    int * support = sort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d\n", support[i]);
    }

    printf("The min number of the file is %d\n", support[0]);
    printf("The max number of the file is %d\n", support[size - 1]);

    if (size % 2 == 0) {
        float medium = (support[size/2] + support[size/2 + 1]) /2;
        printf("The medium number of the file is %f\n", medium);
    } else {
        printf("The medium number of the file is %d\n", support[(size + 1) /2]);
    }

    system("pause");



}

int * sort(int array[], int size) {

    int temp = 0;
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
