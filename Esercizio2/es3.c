#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("numbers.txt", "r");

    //read file into array
    int array[100];
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        fscanf(file, "%d", &array[i]);
    }

    int subt = 0;

    for (int i = 0; i < size; i++) {
        subt -= array[i];
    }

    printf("The subtraction of the numbers in the file is %d\n", subt);

    system("pause");
}


