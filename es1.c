#include <stdio.h>

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        printf("[%d] = %d\n",i,array[i]);

        return 0;
    }
}

