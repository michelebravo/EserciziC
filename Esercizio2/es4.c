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

    long long int prod = 1;

    for (int i = 0; i < size; i++) {
        printf("%lli\n", prod);
        prod *= array[i];
    }

    printf("The product of the numbers in the file is %lli\n", prod);

    system("pause");
}


