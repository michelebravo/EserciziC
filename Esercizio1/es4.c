#include <stdio.h>

int main() {
    float array[] = {1.324,2.4234,3.5235,4.56464,5.7467,6.768,7.234,8.34546,9.45634};

    int size = sizeof(array) / sizeof(array[0]);

    float prod = 1;

    for (int i = 0; i < size; i++) {
        prod *= array[i];
    }

    printf("The product is %.*f",2, prod);

    return 0;
}

